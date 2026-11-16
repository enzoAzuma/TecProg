#pragma once
#include "Entidade.h"
#include "Gerenciador_Tempo.h"

namespace Personagens
{
class Personagem : public Entidades::Entidade
{
protected:
    int num_vidas;
    sf::Vector2f vel;
    static Gerenciadores::Gerenciador_Tempo* pGT;
    float g;
public:
    Personagem();
    ~Personagem();
    virtual void executar() = 0;
    virtual void mover() = 0;
    void setVel(float x, float y) {vel.x = x, vel.y = y;}
    sf::Vector2f getVel() {return vel;}
    void setPosicao(float x, float y);
    void aplicarGravidade();
    static void setGT(Gerenciadores::Gerenciador_Tempo* p) {pGT = p;}
};
}