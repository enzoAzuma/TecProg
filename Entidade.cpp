#include "Entidade.h"

Entidade::Entidade()
: corpo(sf::Vector2f(100.f, 100.f)), janela(nullptr)
{
}

Entidade::~Entidade()
{
}

void Entidade::Desenhar()
{
    if(janela)
        janela->draw(corpo);
}