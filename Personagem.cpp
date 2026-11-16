#include "Personagem.h"

Gerenciadores::Gerenciador_Tempo* Personagens::Personagem::pGT = nullptr;

Personagens::Personagem::Personagem()
: g(500)
{
    vel = sf::Vector2f(0.1f, 0.f);
}

Personagens::Personagem::~Personagem()
{
}

void Personagens::Personagem::setPosicao(float x, float y)
{
    this->x = x;
    this->y = y;

    getFigura()->setPosicao(x, y);
}

void Personagens::Personagem::aplicarGravidade()
{
    float dt = pGT->getDt();
    vel.y += g * dt;
    setPosicao(x, y += vel.y * dt);
    std::cout << "dt=" << dt << " vel.y=" << vel.y << " y=" << y << "\n";
}
