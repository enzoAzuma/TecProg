#include "Jogo.h"

Jogo::Jogo()
: pGrafico(Gerenciadores::Gerenciador_Grafico::getGerenciadorGrafico())
{
    pJog1 = new Personagens::Jogador();
    pJog1->getFigura();

    fase1 = new Fases::Fase_Primeira(pJog1);

    LEs = fase1->getListaEntidades();

    Ente::setGG(pGrafico); // seta o gerenciador grafico para todos entes
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
        } // desenha as entidades da lista entidades
        fase1->Executar();
        pGrafico->mostraElementos();
    }
}