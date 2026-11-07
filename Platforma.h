#pragma once
#include "Obstaculo.h"
#include "Jogador.h"
#include <iostream>

namespace Obstaculos
{
class Platforma : public Obstaculos::Obstaculo
{
private:
    int altura;
    int largura;
public:
    Platforma(int a, int l);
    ~Platforma();
    void obstaculizar(Personagens::Jogador* p) override;
};
}