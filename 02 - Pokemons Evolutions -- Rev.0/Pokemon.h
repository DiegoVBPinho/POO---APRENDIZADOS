#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon
{
public:
    Pokemon(std::string name, int life, int damage); // método construtor

protected:
    std::string nome;
    int vida;
    int dano;
};

#endif