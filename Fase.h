#pragma once
#include "ListaEntidade.h"
#include "Jogador.h"
#include "Inimigo.h"
#include <SFML/Graphics.hpp>

namespace Fases
{
class Fase
{
protected:
    Listas::ListaEntidade* lista_ents;
    Jogador* pJog1;
    Inimigo* pInim1;
    sf::RenderWindow* janela;
public:
    Fase(Jogador* j1, sf::RenderWindow* j);
    ~Fase();
    void InicializaElementos();
    Listas::ListaEntidade* getListaEntidades() {return lista_ents;}
};
}