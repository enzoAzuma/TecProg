#include "Jogador.h"

Jogador::Jogador()
{
    vel = sf::Vector2f(0.1f, 0.1f);
}

Jogador::~Jogador()
{
}

void Jogador::Mover()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        {
            corpo.move(sf::Vector2f(vel.x, 0.f));
        }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        {
            corpo.move(sf::Vector2f(-vel.x, 0.f));
        }
    
    
}