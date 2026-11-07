#include "Ente.h"
#include "Gerenciador_Grafico.h"

Gerenciadores::Gerenciador_Grafico* Ente::pGG = nullptr;

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
    pFig = f;
}