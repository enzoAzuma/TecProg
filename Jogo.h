#pragma once
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "Inimigo.h"

class Jogo
{
private:
    sf::RenderWindow janela;
    
    Jogador* pJog1;
    Inimigo* pInim1;
    
public:
    Jogo();
    ~Jogo();
    void Executar();
};