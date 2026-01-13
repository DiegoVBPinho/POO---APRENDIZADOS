#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon
{
public:
    // método construtor - Inicializa o estado do obj.
    Pokemon(std::string name, int life, int attack); // CONSTRUTOR
    Pokemon();                                       // Se a classe base não tem construtor vazio, TODA classe filha é OBRIGADA a chamar um construtor dela.

    virtual ~Pokemon(); // VIRTUAL DESTRUTOR Para que os filhos possam ser "Finalizados"

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