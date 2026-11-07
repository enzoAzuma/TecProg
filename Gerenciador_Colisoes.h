#pragma once 
#include "ListaEntidade.h"
#include "Jogador.h"
#include "Figura.h"
#include "Inimigo.h"
#include "Obstaculo.h"
#include <vector>
#include <list>

namespace Gerenciadores
{
class Gerenciador_Colisoes
{
private:
   std::vector<Personagens::Inimigo*> LIs;
   std::list<Obstaculos::Obstaculo*> LOs;

   Personagens::Jogador* pJog1;
   
public:
    Gerenciador_Colisoes();
    ~Gerenciador_Colisoes();
    const bool verificarColisao(Entidades::Entidade* pe1, Entidades::Entidade* pe2) const;
    void tratarColisoesJogsObstacs();
    void tratarColisoesJogsInimigs();
    void incluirInimigo(Personagens::Inimigo* pi) {if(pi) LIs.push_back(pi);}
    void incluirObstaculo(Obstaculos::Obstaculo* po) {if(po) LOs.push_back(po);}
    void incluirJogador(Personagens::Jogador* pj) {pJog1 = pj;}
    void Executar();
};
}