#include "Fase_Primeira.h"

Fases::Fase_Primeira::Fase_Primeira(Personagens::Jogador* j1)
: Fase(j1)
{
    criarInimigos();
    criarPlataformas();
}

Fases::Fase_Primeira::~Fase_Primeira()
{
}

void Fases::Fase_Primeira::criarInimigos()
{
    Inim_Facil* pInim1 = new Inim_Facil();
    lista_ents->getLEs()->incluir(pInim1);
    GC.incluirInimigo(pInim1);
}

void Fases::Fase_Primeira::criarPlataformas()
{
    Obstaculos::Platforma* pPlat1 = new Obstaculos::Platforma(600.f, 100.f);
    lista_ents->getLEs()->incluir(pPlat1);
    GC.incluirObstaculo(pPlat1);
}

void Fases::Fase_Primeira::executar()
{
    float dt = c.restart().asSeconds();
    if (dt > 0.05f) dt = 0.05f;
    GC.Executar();
}