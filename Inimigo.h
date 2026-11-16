#pragma once
#include "Personagem.h"
#include "Figura.h"
#include "Jogador.h"

namespace Personagens
{
class Inimigo : public Personagens::Personagem
{
private:
    
public:
    Inimigo();
    ~Inimigo();
    virtual void danificar(Personagens::Jogador* p) = 0;
    virtual void executar() = 0;
};
}