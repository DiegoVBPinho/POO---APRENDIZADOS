#ifndef POKEMON_AGUA_H
#define POKEMON_AGUA_H

#include "Pokemon.h" // HERANÇA

class PokemonAgua : public Pokemon
{
public:
    PokemonAgua(std::string name, int life, int attack);

    void atacar(Pokemon &inimigo) override;
};

#endif