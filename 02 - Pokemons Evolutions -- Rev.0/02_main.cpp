#include <iostream>
#include "Pokemon.h"
#include "Pokemon_Fogo.h"

int main()
{
    Pokemon pikachu("Pikachu", 100, 50);
    Pokemon charmander("Charmander", 120, 60);
    PokemonFogo charizard("Charizard", 150, 80);

    // mostrando a vida
    int vidadopikachu = pikachu.get_vida();
    int vidadocharmander = charmander.get_vida();

    std::cout << vidadocharmander << std::endl;
    std::cout << vidadopikachu << std::endl;

    // duelo

    pikachu.atacar(charmander);
    charizard.atacar(pikachu);

    // mostrando a vida pos duelo
    vidadopikachu = pikachu.get_vida();
    vidadocharmander = charmander.get_vida();
    int vidadocharizard = charizard.get_vida();

    std::cout << vidadocharmander << std::endl;
    std::cout << vidadopikachu << std::endl;
    std::cout << vidadocharizard << std::endl;
    return 0;
}
