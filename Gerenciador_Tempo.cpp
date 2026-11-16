#include "Gerenciador_Tempo.h"

Gerenciadores::Gerenciador_Tempo* Gerenciadores::Gerenciador_Tempo::pGT = nullptr;

Gerenciadores::Gerenciador_Tempo::Gerenciador_Tempo(/* args */)
: dt(0.f), dtMax(0.05f)
{
}

Gerenciadores::Gerenciador_Tempo::~Gerenciador_Tempo()
{
}

Gerenciadores::Gerenciador_Tempo* Gerenciadores::Gerenciador_Tempo::getGerenciadorTempo()
{
    if(pGT == nullptr)
        pGT = new Gerenciador_Tempo();
    return pGT;
}

void Gerenciadores::Gerenciador_Tempo::atualizar()
{
    dt = r.restart().asSeconds();
    if (dt > dtMax)
        dt = dtMax;
}