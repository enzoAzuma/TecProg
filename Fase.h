#pragma once
#include "ListaEntidade.h"
#include "Jogador.h"
#include "Inim_Facil.h"
#include "Ente.h"
#include "Figura.h"
#include "Gerenciador_Colisoes.h"
#include <SFML/Graphics.hpp>

namespace Fases
{
class Fase : public Ente
{
protected:
    Gerenciadores::Gerenciador_Colisoes GC;
    Listas::ListaEntidade* lista_ents;
    Personagens::Jogador* pJog1;
    
public:
    Fase(Personagens::Jogador* j1);
    ~Fase();
    void InicializaElementos();
    Listas::ListaEntidade* getListaEntidades() {return lista_ents;}
    void criarInimigos();
    void Executar();
};
}