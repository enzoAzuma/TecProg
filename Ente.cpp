#include "Ente.h"
#include "Gerenciador_Grafico.h"

Gerenciador_Grafico* Ente::pGG = nullptr;

Ente::Ente()
: id(0), pFig(nullptr)
{
}

Ente::~Ente()
{
}
void Ente::Desenhar()
{
    if(pGG)
        pGG->desenharEnte(this);
}

void Ente::setFigura(Figura* f)
{
    delete pFig;
    pFig = f;
}