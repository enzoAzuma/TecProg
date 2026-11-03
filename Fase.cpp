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
    criarInimigos();
}

Fase::~Fase()
{
}

void Fase::InicializaElementos()
{
    lista_ents->getLEs()->incluir(pJog1);
}

void Fase::criarInimigos()
{
    Inim_Facil* pInim1 = new Inim_Facil();
    lista_ents->getLEs()->incluir(pInim1);
    GC.incluirInimigo(pInim1);
}

void Fase::Executar()
{
    GC.executar();

}
}