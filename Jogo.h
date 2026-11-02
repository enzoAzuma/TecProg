#pragma once
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidade.h"
#include "Fase.h"
#include "Gerenciador_Grafico.h"
#include "Ente.h"

class Jogo
{
private:
    Gerenciador_Grafico* pGrafico;

    Jogador* pJog1;
    Listas::ListaEntidade* LEs;
    Fases::Fase* fase1;
public:
    Jogo();
    ~Jogo();
    void Executar();
};