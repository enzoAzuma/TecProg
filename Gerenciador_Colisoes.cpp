#include "Gerenciador_Colisoes.h"
#include "ListaEntidade.h"

Gerenciadores::Gerenciador_Colisoes::Gerenciador_Colisoes()
{
}

Gerenciadores::Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
}

bool Gerenciadores::Gerenciador_Colisoes::verificarColisao(Entidades::Entidade* pe1, Entidades::Entidade* pe2) const
{
    sf::Vector2f pos1 = pe1->getFigura()->getPosicao();
    sf::Vector2f pos2 = pe2->getFigura()->getPosicao();

    sf::Vector2f tam1 = pe1->getFigura()->getTamanho();
    sf::Vector2f tam2 = pe2->getFigura()->getTamanho();
    
    sf::Vector2f dist
    (
        fabs((pos1.x + tam1.x/2.0f) - (pos2.x + tam2.x/2.0f)), 
        fabs((pos1.y + tam1.y/2.0f) - (pos2.y + tam2.y/2.0f))
    );
    sf::Vector2f somaMetadeRetangulo(tam1.x/2.0f + tam2.x/2.0f, tam1.y/2.0f + tam2.y/2.0f);
    sf::Vector2f resultado(dist.x - somaMetadeRetangulo.x, dist.y - somaMetadeRetangulo.y);

    if(resultado.x <= 0 && resultado.y <= 0)
        return true;
    else
        return false;
}

void Gerenciadores::Gerenciador_Colisoes::tratarColisoesJogsObstacs()
{
    for (Obstaculos::Obstaculo* obs : LOs)
    {
        if (obs && verificarColisao(pJog1, obs))
        {
            obs->obstaculizar(pJog1);
        }
    }
}

void Gerenciadores::Gerenciador_Colisoes::tratarColisoesJogsInimigs()
{
    for(size_t i = 0; i < LIs.size(); i++)
    {
        if(verificarColisao(pJog1, LIs[i]))
        {
            pJog1->colidir(LIs[i]);
            LIs[i]->danificar(pJog1);
            
        }
            
    }
}

void Gerenciadores::Gerenciador_Colisoes::executar()
{
    tratarColisoesJogsInimigs();
    tratarColisoesJogsObstacs();
}

