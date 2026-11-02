#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"

namespace Entidades
{
class Entidade : public Ente
{
protected:
    float x;
    float y;
    sf::RectangleShape corpo;
    sf::RenderWindow* janela;

public:
    Entidade();
    ~Entidade();
    void setJanela(sf::RenderWindow* j) {janela = j;}
};
}