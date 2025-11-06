🧮 Algoritmos — Cadastro e Análise de Clientes

Este projeto em C realiza o cadastro de clientes, permitindo a entrada de informações básicas (como nome, idade, sexo e salário), a impressão de todos os registros e o cálculo da soma e média das idades.

O código foi desenvolvido de forma modular, utilizando structs e funções para tornar a aplicação mais organizada e reutilizável.


⚙️ Funcionalidades

Cadastro de 5 clientes

Cada cliente possui:

Código

Nome

Idade

Sexo (M/F)

Salário

Impressão formatada

Mostra todos os dados cadastrados com separação clara entre os clientes.

Cálculo estatístico

Soma todas as idades dos clientes.

Calcula a média das idades e exibe no final.


🧠 Principais Funções
void imprimirClientes(struct dados clientes[], int n)

Imprime todos os dados dos clientes em formato legível.

int somarIdades(struct dados clientes[], int n)

Percorre o vetor de clientes e retorna a somatória das idades.

💻 Execução
🔧 Compilação manual

Para compilar no terminal (Linux ou macOS):

gcc Algoritimos.cpp -o Algoritimos -lstdc++


Ou no Windows (usando MinGW, por exemplo):

g++ Algoritimos.cpp -o Algoritimos.exe

▶️ Execução

Após compilar, execute:

./Algoritimos


ou no Windows:

Algoritimos.exe

📋 Exemplo de uso
Programa de cadastro de 5 clientes

--- Cadastro do cliente 1 ---
Codigo: 101
Nome: Ana Silva
Idade: 30
Sexo (M/F): F
Salario: 3500.00
...

--- Lista de clientes (5) ---
Cliente 1:
  Codigo : 101
  Nome   : Ana Silva
  Idade  : 30
  Sexo   : F
  Salario: 3500.00
-------------------------
...

Somatoria das idades: 145
Media das idades: 29.00

🧰 Tecnologias Utilizadas

Linguagem: C/C++

Bibliotecas padrão:

<stdio.h>

<stdlib.h>

<string.h>

📄 Licença

Desenvolvido por Eduardo Weirich Godinho
