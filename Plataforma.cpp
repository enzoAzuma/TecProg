#include "Platforma.h"

Obstaculos::Platforma::Platforma(int a, int l)
: altura(a), largura(l)
{
    setFigura(new Figura(altura, largura));
    pFig->setCor(sf::Color::Green);
    pFig->setPosicao(200.f, 400.f);
}

Obstaculos::Platforma::~Platforma()
{
}

void Obstaculos::Platforma::obstaculizar(Personagens::Jogador* j)
{
    
    sf::Vector2f posP = pFig->getPosicao();
    sf::Vector2f tamP = pFig->getTamanho();

    sf::Vector2f posJ = j->getFigura()->getPosicao();
    sf::Vector2f tamJ = j->getFigura()->getTamanho();

    sf::Vector2f centro
    (
        fabs((posP.x + tamP.x / 2.f) - (posJ.x + tamJ.x / 2.f)),
        fabs((posP.y + tamP.y / 2.f) - (posJ.y + tamJ.y / 2.f))
    ); // acha o centro da entidade

    sf::Vector2f somaMetadeRetangulo(tamP.x / 2.f + tamJ.x / 2.f,tamP.y / 2.f + tamJ.y / 2.f);

    sf::Vector2f dist(centro.x - somaMetadeRetangulo.x, centro.y - somaMetadeRetangulo.y); // distancia entre as entidades

if (dist.x < 0 || dist.y < 0) // verifica colisao
{
    // verifica direcao que o personagem vai ser empurrado
    if (dist.x > dist.y)
    {
        if (posJ.x + tamJ.x / 2.f < posP.x + tamP.x / 2.f)
            posJ.x += dist.x;
        else
            posJ.x -= dist.x;
    }
    else
    {
        if (posJ.y + tamJ.y / 2.f < posP.y + tamP.y / 2.f)
            posJ.y += dist.y;
        else
            posJ.y -= dist.y;
    }

    j->setPosicao(posJ.x, posJ.y);
    // passa nova pos de personagem
}

}