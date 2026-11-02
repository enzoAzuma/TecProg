#include "Figura.h"

Figura::Figura(float largura, float altura)
    : forma(sf::Vector2f(largura, altura))
{
    forma.setFillColor(sf::Color::White);
}

Figura::~Figura()
{
}

void Figura::setPosicao(float x, float y)
{
    forma.setPosition({x, y});
}

void Figura::setCor(sf::Color cor)
{
    forma.setFillColor(cor);
}

const sf::Drawable& Figura::getDesenho() const
{
    return forma;
}