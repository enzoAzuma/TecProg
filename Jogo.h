#pragma once
#include "Gerenciador_Grafico.h"
#include "Jogador.h"
#include "ListaEntidade.h"
#include "Fase.h"
#include "Ente.h"

class Jogo
{
private:
    Gerenciador_Grafico* pGrafico;

    Listas::ListaEntidade* LEs;

    Personagens::Jogador* pJog1;

    Fases::Fase* fase1;
public:
    Jogo();
    ~Jogo();
    void Executar();
};