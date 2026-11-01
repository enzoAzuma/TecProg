#include "Elemento.h"

template<class TE> inline Elemento<TE>::Elemento()
: pProx(nullptr), item(nullptr)
{
}

template<class TE> inline Elemento<TE>::~Elemento()
{
    delete item;
}