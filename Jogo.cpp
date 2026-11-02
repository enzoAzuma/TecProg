#include "Jogo.h"

Jogo::Jogo()
: pGrafico(Gerenciador_Grafico::getGerenciadorGrafico())
{
    pJog1 = new Jogador();
    pJog1->getFigura();
    pJog1->setJanela(pGrafico->getJanela());
    fase1 = new Fases::Fase(pJog1, pGrafico->getJanela());
    LEs = fase1->getListaEntidades();

    Ente::setGG(pGrafico);
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
        for(Listas::Elemento<Entidades::Entidade>* aux = LEs->getLEs()->getPrimeiro(); aux != nullptr ; aux = aux->getProx())
        {
            Entidades::Entidade* e = aux->getInfo();
            e->Desenhar();
        }
        pGrafico->mostraElementos();
    }
}