#pragma once
#include "Gerenciador_Grafico.h"
#include "Figura.h"

class Ente
{
protected:
    int id;
    static Gerenciador_Grafico* pGG;
    Figura* pFig;
    void setFigura(Figura* f);
public:
    Ente();
    ~Ente();
    static void setGG(Gerenciador_Grafico* pG) {pGG = pG;}
    Figura* getFigura() {return pFig;}
    void Desenhar();
};