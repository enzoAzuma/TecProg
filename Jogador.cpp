#include "Jogador.h"

Personagens::Jogador::Jogador()
: pontos(0)
{
    setFigura(new Figura(50.f, 80.f));
    setPosicao(200.f, 0.f);
}

Personagens::Jogador::~Jogador()
{
}

void Personagens::Jogador::executar()
{
    mover();
    aplicarGravidade();
}

void Personagens::Jogador::mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) 
        x += vel.x;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) 
        x -= vel.x;
    
    setPosicao(x, y);
}

void Personagens::Jogador::colidir(Inimigo* pIn)
{
    num_vidas--;
    getFigura()->setCor(sf::Color::Magenta);
}
