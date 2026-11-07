#include "Gerenciador_Colisoes.h"
#include "ListaEntidade.h"

Gerenciadores::Gerenciador_Colisoes::Gerenciador_Colisoes()
{
}

Gerenciadores::Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
}

const bool Gerenciadores::Gerenciador_Colisoes::verificarColisao(Entidades::Entidade* pe1, Entidades::Entidade* pe2) const
{
    sf::Vector2f posP = pe1->getFigura()->getPosicao();
    sf::Vector2f posJ = pe2->getFigura()->getPosicao();

    sf::Vector2f tamP = pe1->getFigura()->getTamanho();
    sf::Vector2f tamJ = pe2->getFigura()->getTamanho();
    
    sf::Vector2f centro
    (
        fabs((posP.x + tamP.x/2.0f) - (posJ.x + tamJ.x/2.0f)), 
        fabs((posP.y + tamP.y/2.0f) - (posJ.y + tamJ.y/2.0f))
    ); // acha o centro da entidade
    sf::Vector2f somaMetadeRetangulo(tamP.x/2.0f + tamJ.x/2.0f, tamP.y/2.0f + tamJ.y/2.0f);
    sf::Vector2f dist(centro.x - somaMetadeRetangulo.x, centro.y - somaMetadeRetangulo.y); // distancia entre as entidades

    return(dist.x <= 0 && dist.y <= 0); // colidiu?
}

void Gerenciadores::Gerenciador_Colisoes::tratarColisoesJogsObstacs()
{
    for (Obstaculos::Obstaculo* obs : LOs)
    {
        if (obs && verificarColisao(pJog1, obs))
        {
            obs->obstaculizar(pJog1);
        }
    }
}

void Gerenciadores::Gerenciador_Colisoes::tratarColisoesJogsInimigs()
{
    for(size_t i = 0; i < LIs.size(); i++)
    {
        if(verificarColisao(pJog1, LIs[i]))
        {
            pJog1->colidir(LIs[i]);
            LIs[i]->danificar(pJog1);
            
        }
            
    }
}

void Gerenciadores::Gerenciador_Colisoes::Executar()
{
    tratarColisoesJogsInimigs();
    tratarColisoesJogsObstacs();
}

