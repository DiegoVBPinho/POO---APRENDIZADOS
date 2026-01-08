==================================================
🧠 DIAGRAMA MENTAL – JOGO POKÉMON (POO)
==================================================

🎮 JOGO: BATALHA POKÉMON
 |
 |================================================
 | ① 🧩 CLASSE BASE: Pokemon
 |================================================
 |     |
 |     |-- 📄 ARQUIVOS
 |     |     |-- Pokemon.h
 |     |     |-- Pokemon.cpp
 |     |
 |     |-- 🔒 ATRIBUTOS PRIVADOS
 |     |     |-- nome
 |     |     |-- vida
 |     |     |-- dano
 |     |
 |     |-- 🔧 CONSTRUTOR
 |     |     |-- inicializa nome
 |     |     |-- inicializa vida
 |     |     |-- inicializa dano
 |     |
 |     |-- ⚔️ MÉTODO VIRTUAL
 |           |-- virtual atacar(Pokemon&)
 |
 |================================================
 | ② 🔥 CLASSE: PokemonFogo
 |================================================
 |     |
 |     |-- 📄 ARQUIVOS
 |     |     |-- PokemonFogo.h
 |     |     |-- PokemonFogo.cpp
 |     |
 |     |-- 🧬 HERDA DE
 |     |     |-- Pokemon
 |     |
 |     |-- ⚔️ MÉTODO (OVERRIDE / POLIMORFISMO)
 |           |-- atacar(Pokemon&) override
 |
 |================================================
 | ③ 💧 CLASSE: PokemonAgua
 |================================================
 |     |
 |     |-- 📄 ARQUIVOS
 |     |     |-- PokemonAgua.h
 |     |     |-- PokemonAgua.cpp
 |     |
 |     |-- 🧬 HERDA DE
 |     |     |-- Pokemon
 |     |
 |     |-- ⚔️ MÉTODO (OVERRIDE / POLIMORFISMO)
 |           |-- atacar(Pokemon&) override
 |
 |================================================
 | ④ 🌱 CLASSE: PokemonPlanta
 |================================================
 |     |
 |     |-- 📄 ARQUIVOS
 |     |     |-- PokemonPlanta.h
 |     |     |-- PokemonPlanta.cpp
 |     |
 |     |-- 🧬 HERDA DE
 |     |     |-- Pokemon
 |     |
 |     |-- ⚔️ MÉTODO (OVERRIDE / POLIMORFISMO)
 |           |-- atacar(Pokemon&) override
 |
 |================================================
 | ⑤ ⚔️ FLUXO DO JOGO
 |================================================
       |
       |-- 📍 LOCAL
       |     |-- main.cpp
       |
       |-- 📦 CRIAÇÃO DOS POKÉMONS
       |     |-- cria array de Pokemon*
       |     |-- instancia PokemonFogo / Agua / Planta
       |
       |-- 🎲 ESCOLHA DO DUELO
       |     |-- seleciona dois Pokémons
       |
       |-- ⚔️ BATALHA (POLIMORFISMO)
       |     |-- chama atacar() via Pokemon*
       |     |-- método correto é resolvido em tempo de execução
       |     |-- repete até alguém perder toda a vida
       |     |-- mostra resultado
       |
       |-- 🏁 FIM
             |-- exibe vencedor

==================================================





==================================================
✅ ROTEIRO / CHECKLIST – PROJETO POKÉMON (POO)
==================================================

⚠️ OBJETIVO
--------------------------------------------------
Criar um jogo simples de batalha Pokémon
aprendendo, passo a passo:
- Classe
- Herança
- Polimorfismo
- Array (vetor) de ponteiros

NÃO pular etapas.
Se uma etapa não funcionar, NÃO avance.

==================================================
☑️ ETAPA 1 — CLASSE BASE (SEM HERANÇA)
==================================================

📄 ARQUIVO: Pokemon.h
--------------------------------------------------
[ ] Criar a classe Pokemon
[ ] Declarar os atributos:
    - nome
    - vida
    - dano
[ ] Tornar os atributos PRIVADOS
[ ] Declarar o construtor
[ ] Declarar o método atacar(Pokemon&)
[ ] NÃO usar virtual ainda
[ ] NÃO pensar em herança ainda

📄 ARQUIVO: Pokemon.cpp
--------------------------------------------------
[ ] Incluir "Pokemon.h"
[ ] Implementar o construtor
[ ] Implementar atacar()
[ ] Reduzir a vida do Pokémon inimigo

==================================================
☑️ ETAPA 2 — TESTAR A BASE
==================================================

📄 ARQUIVO: main.cpp
--------------------------------------------------
[ ] Incluir "Pokemon.h"
[ ] Criar dois objetos Pokemon
[ ] Fazer um atacar o outro
[ ] Mostrar a vida após o ataque

👉 Se isso não funcionar, PARE AQUI.

==================================================
☑️ ETAPA 3 — PREPARAR PARA HERANÇA
==================================================

📄 ARQUIVO: Pokemon.h
--------------------------------------------------
[ ] Tornar atacar() um método VIRTUAL
[ ] Criar destrutor virtual
[ ] NÃO mexer no main

==================================================
☑️ ETAPA 4 — PRIMEIRA HERANÇA (FOGO)
==================================================

📄 ARQUIVO: PokemonFogo.h
--------------------------------------------------
[ ] Incluir "Pokemon.h"
[ ] Criar class PokemonFogo : public Pokemon
[ ] Declarar construtor
[ ] Declarar atacar(Pokemon&)
[ ] Marcar atacar() com override

📄 ARQUIVO: PokemonFogo.cpp
--------------------------------------------------
[ ] Incluir "PokemonFogo.h"
[ ] Implementar construtor
[ ] Implementar atacar() com lógica diferente

==================================================
☑️ ETAPA 5 — TESTAR HERANÇA (SEM POLIMORFISMO)
==================================================

📄 ARQUIVO: main.cpp
--------------------------------------------------
[ ] Incluir "PokemonFogo.h"
[ ] Criar um PokemonFogo
[ ] Criar um Pokemon normal
[ ] Fazer o fogo atacar o Pokémon base

==================================================
☑️ ETAPA 6 — POLIMORFISMO (PASSO CHAVE)
==================================================

📄 ARQUIVO: main.cpp
--------------------------------------------------
[ ] Criar um ponteiro Pokemon*
[ ] Apontar para um PokemonFogo
[ ] Chamar atacar() pelo ponteiro
[ ] Ver que o ataque do FOGO é executado

👉 Aqui acontece o POLIMORFISMO:
   ponteiro da base chamando método da filha

==================================================
☑️ ETAPA 7 — OUTROS TIPOS
==================================================

📄 ARQUIVOS:
--------------------------------------------------
[ ] PokemonAgua.h / PokemonAgua.cpp
[ ] PokemonPlanta.h / PokemonPlanta.cpp
[ ] Herdar de Pokemon
[ ] Sobrescrever atacar()

==================================================
☑️ ETAPA 8 — ARRAY DE POKÉMONS (PONTEIROS)
==================================================

📄 ARQUIVO: main.cpp
--------------------------------------------------
[ ] Criar um array de Pokemon*
[ ] Guardar Pokémons de tipos diferentes
[ ] Acessar pelo índice
[ ] Chamar atacar() pelo array

==================================================
☑️ ETAPA 9 — BATALHA FINAL
==================================================

📄 ARQUIVO: main.cpp
--------------------------------------------------
[ ] Escolher dois índices diferentes
[ ] Criar loop de batalha
[ ] Alternar ataques
[ ] Verificar vida
[ ] Mostrar vencedor

==================================================
☑️ CHECKLIST ANTI-ERRO
==================================================

[ ] NÃO incluir arquivos .cpp
[ ] Cada .cpp inclui seu próprio .h
[ ] Classes filhas incluem Pokemon.h
[ ] main.cpp inclui TODOS os .h necessários
[ ] Herança sempre public
[ ] Método virtual só na classe base
[ ] override só nas classes filhas

==================================================
✅ SE VOCÊ CHEGOU ATÉ AQUI:
--------------------------------------------------
- Você usou herança
- Você usou polimorfismo
- Você usou ponteiros
- Você organizou POO corretamente

==================================================
*/
