#include "Jogador.h"

Jogador::Jogador()
{
    vel = sf::Vector2f(0.1f, 0.1f);
    setFigura(new Figura(50.f, 80.f));
}

Jogador::~Jogador()
{
}

void Jogador::Mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) x += vel.x;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) x -= vel.x;
    
    pFig->setPosicao(x,y);
}