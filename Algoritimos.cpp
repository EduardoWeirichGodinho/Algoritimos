
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da struct 'dados' e declaração global do array 'cliente' para 5 clientes
struct dados
{
    int codigo;
    char nome[50];
    int idade;
    char sexo; // 'M' ou 'F' por exemplo
    float salario;
};

// variável global conforme solicitado
struct dados cliente[5];

// Função 1: imprime todos os dados dos clientes recebidos por parâmetro
void imprimirClientes(struct dados clientes[], int n)
{
    printf("\n--- Lista de clientes (%d) ---\n", n);
    for (int i = 0; i < n; ++i)
    {
        printf("Cliente %d:\n", i + 1);
        printf("  Codigo : %d\n", clientes[i].codigo);
        printf("  Nome   : %s\n", clientes[i].nome);
        printf("  Idade  : %d\n", clientes[i].idade);
        printf("  Sexo   : %c\n", clientes[i].sexo);
        printf("  Salario: %.2f\n", clientes[i].salario);
        printf("-------------------------\n");
    }
}

// Função 2: soma as idades e retorna a somatória
int somarIdades(struct dados clientes[], int n)
{
    int soma = 0;
    for (int i = 0; i < n; ++i)
    {
        soma += clientes[i].idade;
    }
    return soma;
}

int main(void)
{
    const int N = 5;
    printf("Programa de cadastro de %d clientes\n", N);

    for (int i = 0; i < N; ++i)
    {
        printf("\n--- Cadastro do cliente %d ---\n", i + 1);

        printf("Codigo: ");
        if (scanf("%d", &cliente[i].codigo) != 1)
        {
            fprintf(stderr, "Entrada invalida para codigo.\n");
            return 1;
        }

        // consumir o resto da linha antes de ler string com espaços
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }

        printf("Nome: ");
        if (fgets(cliente[i].nome, sizeof(cliente[i].nome), stdin) == NULL)
        {
            fprintf(stderr, "Erro lendo nome.\n");
            return 1;
        }
        // remover \n final se presente
        size_t len = strlen(cliente[i].nome);
        if (len > 0 && cliente[i].nome[len - 1] == '\n')
            cliente[i].nome[len - 1] = '\0';

        printf("Idade: ");
        if (scanf("%d", &cliente[i].idade) != 1)
        {
            fprintf(stderr, "Entrada invalida para idade.\n");
            return 1;
        }

        // consumir o resto da linha antes de ler o sexo
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }

        printf("Sexo (M/F): ");
        if (scanf(" %c", &cliente[i].sexo) != 1)
        {
            fprintf(stderr, "Entrada invalida para sexo.\n");
            return 1;
        }

        printf("Salario: ");
        if (scanf("%f", &cliente[i].salario) != 1)
        {
            fprintf(stderr, "Entrada invalida para salario.\n");
            return 1;
        }

        // consumir o resto da linha antes da proxima iteracao
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
    }

    // Chamar função que imprime todos os dados
    imprimirClientes(cliente, N);

    // Chamar função que soma as idades e calcular a média
    int soma = somarIdades(cliente, N);
    float media = (float)soma / N;
    printf("\nSomatoria das idades: %d\n", soma);
    printf("Media das idades: %.2f\n", media);

    return 0;
}
