#pragma once
#include <SFML/Graphics.hpp>

class Figura
{
private:
    sf::RectangleShape forma;

public:
    Figura(float largura = 50.f, float altura = 50.f);
    ~Figura();

    void setPosicao(float x, float y);
    void setCor(sf::Color cor);
    const sf::Drawable& getDesenho() const;
};