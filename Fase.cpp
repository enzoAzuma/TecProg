#include "Fase.h"

namespace Fases
{
Fase::Fase(Personagens::Jogador* j1)
: pJog1(j1)
{
    setFigura(new Figura(800.f, 600.f));
    pFig->setPosicao(0.f, 0.f);

    GC.incluirJogador(pJog1);

    lista_ents = new Listas::ListaEntidade();
    InicializaElementos();
}

Fase::~Fase()
{
}

void Fase::InicializaElementos()
{
    lista_ents->getLEs()->incluir(pJog1);
}
}