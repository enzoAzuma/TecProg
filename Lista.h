#pragma once
#include "Elemento.h"

namespace Listas
{
template <class TL> class Lista
{
private:
    Elemento<TL>* pPrimeiro;
    Elemento<TL>* pUltimo;
public:
    Lista();
    ~Lista();
    TL* getInfo(int pos);
    Elemento<TL>* getPrimeiro() {return pPrimeiro;}
    void incluir(TL* pinfo);
    void Limpar();
};

template <class TL> inline Lista<TL>::Lista()
: pPrimeiro(nullptr), pUltimo(nullptr)
{
}

template <class TL> inline Lista<TL>::~Lista()
{
}

template<class TL> TL* Lista<TL>::getInfo(int pos)
{
     if (pos < 0)
        return nullptr;
    int i = 0;
    for (Elemento<TL>* aux = pPrimeiro; aux != nullptr; aux = aux->getPProx())
    {
        if (i == pos)
            return aux->getItem();   
        i++;
    }
    return nullptr;
}

template<class TL> void Lista<TL>::incluir(TL* pinfo)
{
    if(pPrimeiro == nullptr)
    {
        pPrimeiro = new Elemento<TL>;
        pPrimeiro->incluir(pinfo);
        pUltimo = pPrimeiro;
    }
    else
    {
        Elemento<TL>* aux = new Elemento<TL>;
        aux->incluir(pinfo);
        pUltimo->setProx(aux);
        pUltimo = aux;
    }  
}

template<class TL> void Lista<TL>::Limpar()
{
    Elemento<TL>* aux = pPrimeiro;

    while (aux != nullptr)
    {
        Elemento<TL>* auxProx = aux->getProx();
        delete aux;
        aux = auxProx;
    }
    pPrimeiro = nullptr;
    pUltimo = nullptr;    
}
}