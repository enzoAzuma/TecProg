#pragma once
#include "Entidade.h"
#include "Jogador.h"

namespace Obstaculos
{
    class Obstaculo : public Entidades::Entidade
    {
    private:
        bool danoso;
    public:
        Obstaculo();
        ~Obstaculo();
        virtual void obstaculizar(Personagens::Jogador* p) = 0;
    };
}