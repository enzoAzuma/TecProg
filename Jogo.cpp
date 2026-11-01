#include "Jogo.h"

Jogo::Jogo()
: janela(sf::VideoMode({800, 600}), "Jogo")
{
    pJog1 = new Jogador();
    pInim1 = new Inimigo();

    pJog1->setJanela(&janela);
    pInim1->setJanela(&janela);
    Executar();
}

Jogo::~Jogo()
{
}

void Jogo::Executar()
{
    while(janela.isOpen()) 
    {
        while (const std::optional event = janela.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                janela.close();
        }
        
        pJog1->Mover();
        janela.clear();
        pJog1->Desenhar();
        pInim1->Desenhar();
        janela.display();
    }
}