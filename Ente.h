#pragma once
#include "Gerenciador_Grafico.h"
#include "Figura.h"

class Ente
{
protected:
    int id;
    static Gerenciadores::Gerenciador_Grafico* pGG;
    Figura* pFig;
    
public:
    Ente();
    virtual ~Ente();
    static void setGG(Gerenciadores::Gerenciador_Grafico* pG) {pGG = pG;}
    void setFigura(Figura* f);
    Figura* getFigura() {return pFig;}
    void Desenhar();
};