#include "Inimigo.h"

Personagens::Inimigo::Inimigo()
{
    setFigura(new Figura(50.f, 80.f));
    pFig->setCor(sf::Color::Red);
    pFig->setPosicao(350.f, 200.f);
}

Personagens::Inimigo::~Inimigo()
{
}
