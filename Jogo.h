#pragma once
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidade.h"
#include "Fase.h"
#include "Gerenciador_Grafico.h"

class Jogo
{
private:
    Gerenciador_Grafico* pGrafico;

    Jogador* pJog1;
    ListaEntidade* LEs;
    Fase* fase1;
public:
    Jogo();
    ~Jogo();
    void Executar();
};