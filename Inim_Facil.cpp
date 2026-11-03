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