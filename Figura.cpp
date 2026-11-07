#include "Figura.h"

Figura::Figura(int largura, int altura)
: tamanho(largura, altura), forma(sf::Vector2f(tamanho.x, tamanho.y))
{
    forma.setFillColor(sf::Color::White);
}

Figura::~Figura()
{
}
