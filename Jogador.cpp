#include "Jogador.h"

Personagens::Jogador::Jogador()
: pontos(0)
{
    vel = sf::Vector2f(0.1f, 0.1f);
    setFigura(new Figura(50.f, 80.f));
}

Personagens::Jogador::~Jogador()
{
}

void Personagens::Jogador::Mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) x += vel.x;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) x -= vel.x;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) y += vel.y;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) y -= vel.y;
    
    pFig->setPosicao(x,y);
}

void Personagens::Jogador::colidir(Inimigo* pIn)
{
    num_vidas--;
    getFigura()->setCor(sf::Color::Magenta);
}