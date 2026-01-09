#include "Pokemon_Fogo.h"
#include <iostream>

PokemonFogo::PokemonFogo(std::string name, int life, int attack)
{
    m_nome = name;
    m_vida = life;
    m_ataque = attack;
}

PokemonFogo::PokemonFogo()
{
    m_nome = "Trem";
    m_ataque = 0;
    m_vida = 0;
}

void PokemonFogo::atacar(Pokemon &inimigo)
{
    std::cout << "chamnado atacar do " << m_nome << std::endl;
    inimigo.tomar_dano(m_ataque * 2);
}