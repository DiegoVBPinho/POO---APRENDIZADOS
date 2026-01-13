#include "Pokemon_Fogo.h"
#include <iostream>

PokemonFogo::PokemonFogo(std::string name, int life, int attack)
{
    m_nome = name;
    m_vida = life;
    m_ataque = attack;
}

void PokemonFogo::atacar(Pokemon &inimigo)
{
    std::cout << "chamando atacar do " << m_nome << std::endl;
    inimigo.tomar_dano(m_ataque * 2);
}