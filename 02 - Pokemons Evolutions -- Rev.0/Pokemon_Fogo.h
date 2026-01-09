#ifndef POKEMON_FOGO_H
#define POKEMON_FOGO_H

#include "Pokemon.h"

class PokemonFogo : public Pokemon
{
public:
    PokemonFogo(std::string name, int life, int attack);

    PokemonFogo();

    void atacar(Pokemon &inimigo) override;
};

#endif