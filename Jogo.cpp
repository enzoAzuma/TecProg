#include "Jogo.h"

Jogo::Jogo()
: pGrafico(Gerenciador_Grafico::getGerenciadorGrafico())
{
    pJog1 = new Jogador();
    pJog1->setJanela(pGrafico->getJanela());
    fase1 = new Fase(pJog1, pGrafico->getJanela());
    LEs = fase1->getListaEntidades();
    Executar();
}

Jogo::~Jogo()
{
}

void Jogo::Executar()
{
    while(pGrafico->verificarJanelaAberta()) 
    {
    while (const std::optional evento = pGrafico->getJanela()->pollEvent())
    {
        if (evento->is<sf::Event::Closed>())
            pGrafico->fecharJanela();
    }
        
        pJog1->Mover();
        pGrafico->limpaJanela();
        for(int i = 0; i < LEs->getLEs()->getTam(); i++)
        {
            Entidade* aux = LEs->getLEs()->getItem(i);
            aux->Desenhar();
        }
        pGrafico->mostraElementos();
    }
}