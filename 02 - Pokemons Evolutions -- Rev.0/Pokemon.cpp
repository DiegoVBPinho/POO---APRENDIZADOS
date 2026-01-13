#include "Pokemon.h"

#include <iostream>

// definir os métodos com corpo das funcoes

Pokemon::Pokemon(std::string name, int life, int attack)
{
    m_nome = name;
    m_vida = life;
    m_ataque = attack;
}

Pokemon::Pokemon() {

};

Pokemon::~Pokemon()
{
    std::cout << "chamando destrutor de " << m_nome << std::endl;
}

void Pokemon::tomar_dano(int dano)
{
    std::cout << "chamnado tomar do " << m_nome << std::endl;
    m_vida -= dano;
}

int Pokemon::get_vida()
{
    std::cout << "chamnado get_vida do " << m_nome << std::endl;
    return m_vida;
}

void Pokemon::atacar(Pokemon &inimigo)
{
    std::cout << "chamnado atacar do " << m_nome << std::endl;
    inimigo.tomar_dano(m_ataque);
}