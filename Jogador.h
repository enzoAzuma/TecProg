#pragma once
#include "Personagem.h"
#include "Figura.h"

namespace Personagens
{

class Inimigo;

class Jogador : public Personagens::Personagem
{
private:
    
    int pontos;
public:
    Jogador();
    ~Jogador();
    void executar() override;
    void mover() override;
    void colidir(Inimigo* pIn);
    void perdeVida(int dano) {num_vidas -= dano;}
};
}