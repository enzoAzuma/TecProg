#pragma once
#include "Elemento.h"

template <class TL> class Lista
{
private:
    Elemento<TL>* pPrim;
    Elemento<TL>* pUltimo;
    int tam;
public:
    Lista();
    ~Lista();
    int getTam() {return tam;}
    TL* getItem(int pos);
    void incluir(TL* item);
    void remover(TL* item);
};