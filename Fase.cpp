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

void Fase::gravidade()
{

    float t = c.restart().asSeconds();
    float velY = pJog1->getVel().y;
    
    velY += g * t;
    float novoY = pJog1->getFigura()->getPosicao().y +  velY;

    pJog1->setPosicao(pJog1->getFigura()->getPosicao().x, novoY);
}
}