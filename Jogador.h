#pragma once
#include "Entidade.h"
#include "Figura.h"

class Jogador : public Entidades::Entidade
{
private:
    sf::Vector2f vel;
    
public:
    Jogador();
    ~Jogador();
    void Mover();
};