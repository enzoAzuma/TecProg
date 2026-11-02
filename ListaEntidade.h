#pragma once
#include "Lista.h"
#include "Entidade.h"

namespace Listas
{
class ListaEntidade
{
private:
    Lista<Entidades::Entidade> LEs;
public:
    ListaEntidade();
    ~ListaEntidade();
    Lista<Entidades::Entidade>* getLEs() { return &LEs; }
};
}
