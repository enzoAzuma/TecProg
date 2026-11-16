#include "Inim_Facil.h"

Inim_Facil::Inim_Facil()
: dano(5)
{
}

Inim_Facil::~Inim_Facil()
{
}

void Inim_Facil::danificar(Personagens::Jogador* p)
{
    p->perdeVida(dano);
}

void Inim_Facil::mover()
{

}

void Inim_Facil::executar()
{
    aplicarGravidade();
}