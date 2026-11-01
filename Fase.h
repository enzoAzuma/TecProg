#pragma once
#include "ListaEntidade.h"
#include "Jogador.h"
#include "Inimigo.h"
#include <SFML/Graphics.hpp>

class Fase
{
protected:
    ListaEntidade* lista_ents;
    Jogador* pJog1;
    Inimigo* pInim1;
    sf::RenderWindow* janela;
public:
    Fase(Jogador* j1, sf::RenderWindow* j);
    ~Fase();
    void InicializaElementos();
    ListaEntidade* getListaEntidades() {return lista_ents;}
};

