#pragma once
#include <SFML/Graphics.hpp>

class Figura
{
private:
    sf::Vector2f tamanho;
    sf::RectangleShape forma;
public:
    Figura(int largura, int altura);
    ~Figura();

    void setPosicao(float x, float y) {forma.setPosition({x, y});}
    sf::Vector2f getPosicao() {return forma.getPosition();}
    void setCor(sf::Color cor) {forma.setFillColor(cor);}
    void setForma(sf::Texture* tex) {forma.setTexture(tex);}
    sf::Vector2f getTamanho() {return tamanho;}
    const sf::Drawable& getDesenho() const {return forma;}
};