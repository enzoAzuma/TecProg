#pragma once
#include "Inimigo.h"
#include "Jogador.h"

class Inim_Facil : public Personagens::Inimigo
{
private:
    float raio;
    int dano;
public:
    Inim_Facil();
    ~Inim_Facil();
    void danificar(Personagens::Jogador* p) override;
    void mover() override;
    void executar() override;
};