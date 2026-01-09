#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon
{
public:
    // método construtor - Inicializa o estado do obj.
    Pokemon(std::string name, int life, int attack);
    Pokemon();

    virtual ~Pokemon();

    // virtual permite override

    virtual void atacar(Pokemon &inimigo);
    virtual void tomar_dano(int dano);
    int get_vida();

protected:
    std::string m_nome;
    int m_vida;
    int m_ataque;
};

#endif