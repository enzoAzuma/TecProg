#include "Inimigo.h"

Personagens::Inimigo::Inimigo()
{
    setFigura(new Figura(50.f, 80.f));
    pFig->setCor(sf::Color::Red);
    pFig->setPosicao(400.f, 400.f);
}

Personagens::Inimigo::~Inimigo()
{
}
