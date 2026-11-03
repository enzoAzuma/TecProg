#pragma once
#include "Personagem.h"
#include "Figura.h"

namespace Personagens
{
    
class Inimigo;

class Jogador : public Personagens::Personagem
{
private:
    sf::Vector2f vel;
    int pontos;
public:
    Jogador();
    ~Jogador();
    void Mover();
    void colidir(Inimigo* pIn);
    void perdeVida(int dano) {num_vidas -= dano;}
};
}