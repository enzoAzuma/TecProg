#pragma once
#include <SFML/Graphics.hpp>

class Figura
{
private:
    sf::Vector2f tamanho;
    sf::RectangleShape forma;
public:
    Figura(float largura = 50.f, float altura = 50.f);
    ~Figura();

    void setPosicao(float x, float y) {forma.setPosition({x, y});}
    sf::Vector2f getPosicao() {return forma.getPosition();}
    void setCor(sf::Color cor) {forma.setFillColor(cor);}
    sf::Vector2f getTamanho() {return tamanho;}
    const sf::Drawable& getDesenho() const {return forma;}
};