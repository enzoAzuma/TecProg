#pragma once
#include "Entidade.h"

class Jogador : public Entidade
{
private:
    sf::Vector2f vel;
    
public:
    Jogador();
    ~Jogador();
    void Mover();
};