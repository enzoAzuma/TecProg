#pragma once
#include <SFML/Graphics.hpp>

class Entidade
{
protected:
    sf::RectangleShape corpo;
    sf::RenderWindow* janela;
public:
    Entidade();
    ~Entidade();
    void setJanela(sf::RenderWindow* j) {janela = j;}
    void Desenhar();
};