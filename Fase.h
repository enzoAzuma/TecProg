#pragma once
#include "ListaEntidade.h"
#include "Jogador.h"
#include "Inim_Facil.h"
#include "Ente.h"
#include "Figura.h"
#include "Gerenciador_Colisoes.h"
#include <SFML/Graphics.hpp>
#include <iostream>

namespace Fases
{
class Fase : public Ente
{
protected:
    Gerenciadores::Gerenciador_Colisoes GC;
    Listas::ListaEntidade* lista_ents;
    Personagens::Jogador* pJog1;
    float g = 500;
    sf::Clock c;
public:
    Fase(Personagens::Jogador* j1);
    ~Fase();
    void InicializaElementos();
    Listas::ListaEntidade* getListaEntidades() {return lista_ents;}
    virtual void criarInimigos() = 0;
    virtual void Executar() = 0;
    void gravidade();
};
}