#include "Fase.h"

namespace Fases
{
Fase::Fase(Jogador* j1, sf::RenderWindow* j)
: pJog1(j1), janela(j)
{
    lista_ents = new Listas::ListaEntidade();
    pInim1 = new Inimigo();
    pInim1->setJanela(janela);
    InicializaElementos();
}

Fase::~Fase()
{
}

void Fase::InicializaElementos()
{
    lista_ents->getLEs()->incluir(pJog1);
    lista_ents->getLEs()->incluir(pInim1);
}
}