#include "Gerenciador_Grafico.h"
#include "Ente.h"

Gerenciadores::Gerenciador_Grafico* Gerenciadores::Gerenciador_Grafico::pGrafico = nullptr;

Gerenciadores::Gerenciador_Grafico::Gerenciador_Grafico()
: janela(new sf::RenderWindow(sf::VideoMode({800, 600}), "Jogo"))
{
}

Gerenciadores::Gerenciador_Grafico::~Gerenciador_Grafico()
{
    delete janela;
    janela = nullptr;
}

Gerenciadores::Gerenciador_Grafico* Gerenciadores::Gerenciador_Grafico::getGerenciadorGrafico()
{
    if (pGrafico == nullptr)
        pGrafico = new Gerenciador_Grafico(); // cria o gerenciador grafico usado por todos os entes
    return pGrafico;
}

void Gerenciadores::Gerenciador_Grafico::desenharEnte(Ente* pE)
{
    if(pE && pE->getFigura())
        janela->draw(pE->getFigura()->getDesenho());
}