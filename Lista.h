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

template <class TL> inline Lista<TL>::Lista()
: pPrim(nullptr), pUltimo(nullptr), tam(0)
{
}

template <class TL> inline Lista<TL>::~Lista()
{
}

template<class TL> TL* Lista<TL>::getItem(int pos)
{
     if (pos < 0)
        return nullptr;
    int i = 0;
    for (Elemento<TL>* aux = pPrim; aux != nullptr; aux = aux->getPProx())
    {
        if (i == pos)
            return aux->getItem();   
        i++;
    }
    return nullptr;
}

template<class TL> void Lista<TL>::incluir(TL* item)
{
    if(pPrim == nullptr)
    {
        pPrim = new Elemento<TL>;
        pPrim->setItem(item);
        pUltimo = pPrim;
    }
    else
    {
        Elemento<TL>* aux = new Elemento<TL>;
        aux->setItem(item);
        pUltimo->setPProx(aux);
        pUltimo = aux;
    }  
    tam++;
}

template<class TL> void Lista<TL>::remover(TL* item)
{
    Elemento<TL>* aux = pPrim;
    Elemento<TL>* auxAnte = nullptr;

    while (aux->getItem != item)
    {
        auxAnte = aux;
        aux = aux->getPProx();
    }
    if(aux == pPrim)
    {
        pPrim = aux->getPProx();
    }
    else if(aux == pUltimo)
    {
        auxAnte->setPProx(nullptr);
        pUltimo = auxAnte;
    }
    else
    {
        auxAnte->setPProx(aux->getPProx());
    }
    delete aux;
    tam--;
}