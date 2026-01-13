#ifndef POKEMON_PLANTA_H
#define POKEMON_PLANTA_H

#include "Pokemon.h" // HERANCA

class PokemonPlanta : public Pokemon
{
public:
    PokemonPlanta(std::string name, int life, int attack);

    void atacar(Pokemon &inimigo) override;
};

#endif