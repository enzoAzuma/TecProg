#pragma once
#include "Fase.h"
#include "Inim_Facil.h"
#include "Platforma.h"

namespace Fases
{
class Fase_Primeira : public Fases::Fase
{
private:
    
public:
    Fase_Primeira(Personagens::Jogador* j1);
    ~Fase_Primeira();
    void criarInimigos() override;
    void criarPlataformas();
    void Executar() override;
};
}