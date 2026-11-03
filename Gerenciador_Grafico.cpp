#include "Gerenciador_Grafico.h"
#include "Ente.h"

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
        pGrafico = new Gerenciador_Grafico(); // cria o gerenciador grafico usado por todos os entes
    return pGrafico;
}

void Gerenciador_Grafico::desenharEnte(Ente* pE)
{
    if(pE && pE->getFigura())
        janela->draw(pE->getFigura()->getDesenho());
}
