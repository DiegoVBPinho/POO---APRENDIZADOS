#include <iostream>
#include <string>
using namespace std;

/*A ideia é fazer uma batalha pokemon de zumbis para aprender POO.
A ideia é fazer 2 zumbis, baterem um no outro e após isso, mostrar na tela a vida de cada um.

Esse é o primeiro contato com POO, então, será simples!*/

// - 1 Atributos dos combatentes

class Zumbi
{
public:
    // A) Aqui embaixo vêm os Atributos (variáveis)
    string nome;
    int vida;
    int dano;

    // CONSTRUTOR
    Zumbi(string n, int v, int d) // os dados do zumbi receberão esses parametros.: Nome, Vida, Dano.
    {
        nome = n;
        vida = v;
        dano = d;
    }

    // B) Aqui embaixo vêm os Métodos (funções)
    void atacar(Zumbi &inimigo)
    {
        inimigo.vida -= dano;

        cout << nome << " atacou " << inimigo.nome << " com " << dano << " de dano! ";
        if (inimigo.vida < 0)
            cout << " a vida de " << inimigo.nome << " eh " << " 0 " << endl;
        else
            cout << " a vida de " << inimigo.nome << " eh " << inimigo.vida << endl;
    }
};

// - 2 Criando a Arena
int main()
{
    // C) Criar instâncias de Zumbi

    Zumbi z1("Pikachu", 100, 20);
    Zumbi z2("Blastoise", 100, 30);

    // D) Fazer o Zumbi bater

    cout << "Estão na Arena de Batalha: " << endl;

    // vida e dano de cada zumbi
    cout << z1.nome << " " << z1.vida << " de vida e " << z1.dano << " de dano " << endl;
    cout << z2.nome << " " << z2.vida << " de vida e " << z2.dano << " de dano " << endl;

    cout << endl;

    while (z1.vida > 0 && z2.vida > 0)
    {

        // ataques
        z1.atacar(z2);

        z2.atacar(z1);
    }

    if (z1.vida < 0)
        cout << z1.nome << " morreu!";
    else
        cout << z2.nome << " morreu!";

    // E) Conferência

    return 0;
}