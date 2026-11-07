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
    void setPosicao(float x, float y);
    void setVel(float x, float y) {vel.x = x, vel.y = y;}[
    sf::Vector2f getVel() {return vel;}]
};
}