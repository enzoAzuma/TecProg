#pragma once
#include "Gerenciador_Grafico.h"
#include "Jogador.h"
#include "ListaEntidade.h"
#include "Fase_Primeira.h"
#include "Personagem.h"
#include "Gerenciador_Tempo.h"

class Jogo
{
private:
    Gerenciadores::Gerenciador_Grafico* pGrafico;
    
    Gerenciadores::Gerenciador_Tempo* pGT;

    Listas::ListaEntidade* LEs;

    Personagens::Jogador* pJog1;

    Fases::Fase_Primeira* fase1;
public:
    Jogo();
    ~Jogo();
    void Executar();
};