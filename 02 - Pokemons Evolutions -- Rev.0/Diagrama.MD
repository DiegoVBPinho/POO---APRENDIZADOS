/*
==================================================
🧠 DIAGRAMA MENTAL – JOGO POKÉMON (POO COMPLETA)
==================================================

📁 ESTRUTURA DE ARQUIVOS
 |
 |-- 📄 Pokemon.h
 |     |
 |     |-- Classe Base: Pokemon
 |     |-- 🔒 Atributos privados
 |     |-- 🔧 Construtor
 |     |-- ⚔️ Métodos virtuais (atacar)
 |
 |-- 📄 PokemonFogo.h
 |     |
 |     |-- herda de Pokemon
 |     |-- sobrescreve atacar()
 |
 |-- 📄 PokemonAgua.h
 |     |
 |     |-- herda de Pokemon
 |     |-- sobrescreve atacar()
 |
 |-- 📄 PokemonPlanta.h
 |     |
 |     |-- herda de Pokemon
 |     |-- sobrescreve atacar()
 |
 |-- 📄 Pokemon.cpp
 |     |
 |     |-- implementação da classe base
 |
 |-- 📄 PokemonFogo.cpp
 |-- 📄 PokemonAgua.cpp
 |-- 📄 PokemonPlanta.cpp
 |     |
 |     |-- implementação específica de cada tipo
 |
 |-- 📄 main.cpp
       |
       |-- 📦 CADASTRO DOS POKÉMONS
       |     |-- cria array Pokemon*
       |     |-- instancia 6 Pokémons
       |
       |-- 🎲 SORTEIO DO DUELO
       |     |-- escolhe dois índices diferentes
       |
       |-- ⚔️ FLUXO DO JOGO
             |-- anuncia duelo
             |-- executa ataques (polimorfismo)
             |-- mostra resultado

--------------------------------------------------
📌 REGRAS MENTAIS
--------------------------------------------------
- main orquestra o jogo
- classes executam regras
- .h declara
- .cpp implementa
- atributos são privados
- comportamento varia por herança

==================================================
*/
