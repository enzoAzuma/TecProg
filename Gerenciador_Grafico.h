#pragma once
#include <SFML/Graphics.hpp>
#include "Figura.h"
#include "iostream"
class Ente;

namespace Gerenciadores
{
class Gerenciador_Grafico
{
private:
    sf::RenderWindow* janela;
    static Gerenciadores::Gerenciador_Grafico* pGrafico;
    Gerenciador_Grafico();

public:
    ~Gerenciador_Grafico();
    static Gerenciador_Grafico* getGerenciadorGrafico();
    sf::RenderWindow* getJanela() { return janela; }
    bool verificarJanelaAberta() { return janela->isOpen(); }
    void fecharJanela() { janela->close(); }
    void limpaJanela() { janela->clear(); }
    void mostraElementos() { janela->display(); }
    void desenharEnte(Ente* pE);
};
}