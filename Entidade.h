#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"

namespace Entidades
{
class Entidade : public Ente
{
protected:
    float x;
    float y;
public:
    Entidade();
    ~Entidade();
};
}