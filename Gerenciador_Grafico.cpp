#include "Gerenciador_Grafico.h"

Gerenciador_Grafico* Gerenciador_Grafico::pGrafico = nullptr;

Gerenciador_Grafico::Gerenciador_Grafico()
    : janela(new sf::RenderWindow(sf::VideoMode({800, 600}), "Jogo"))
{
}

Gerenciador_Grafico::~Gerenciador_Grafico()
{
    delete janela;
    janela = nullptr;
}

Gerenciador_Grafico* Gerenciador_Grafico::getGerenciadorGrafico()
{
    if (pGrafico == nullptr)
        pGrafico = new Gerenciador_Grafico();
    return pGrafico;
}