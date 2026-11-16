#include "Jogo.h"

Jogo::Jogo()
: pGrafico(Gerenciadores::Gerenciador_Grafico::getGerenciadorGrafico()), pGT(Gerenciadores::Gerenciador_Tempo::getGerenciadorTempo())
{
    Ente::setGG(pGrafico); // seta o gerenciador grafico para todos entes
    Personagens::Personagem::setGT(pGT);
    pJog1 = new Personagens::Jogador();
    pJog1->getFigura();

    fase1 = new Fases::Fase_Primeira(pJog1);

    LEs = fase1->getListaEntidades();

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
        pGT->atualizar();
        pJog1->executar();
        fase1->executar();
        pGrafico->limpaJanela();
        
        for(Listas::Elemento<Entidades::Entidade>* aux = LEs->getLEs()->getPrimeiro(); aux != nullptr ; aux = aux->getProx())
        {
            Entidades::Entidade* e = aux->getInfo();
            e->Desenhar();
        } // desenha as entidades da lista entidades
        
        pGrafico->mostraElementos();
    }
}