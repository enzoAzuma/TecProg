#pragma once
#include <SFML/Graphics.hpp>

namespace Gerenciadores
{

class Gerenciador_Tempo
{
private:
    static Gerenciadores::Gerenciador_Tempo* pGT;
    sf::Clock r;
    float dt;
    float dtMax;
public:
    Gerenciador_Tempo();
    ~Gerenciador_Tempo();
    static Gerenciadores::Gerenciador_Tempo* getGerenciadorTempo();
    void atualizar();                    
    void reiniciar() {r.restart();}
    float getDt() const {return dt;}

};
}
