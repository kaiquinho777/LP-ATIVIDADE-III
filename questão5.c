#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define MERCADO 100
int main()
{

    setlocale(LC_ALL, "portuguese");

    char nomesProdutos[MERCADO][50];
    float precos[MERCADO];
    int quantidades[MERCADO];

    int opcao;
    int totalVendas = 0;
    float totalGeral = 0;

    do
    {

        printf("| codigo |           FUNÇAO       |\n");
        printf("|   1    |     ADICIONAR VENDA    |\n");
        printf("|   2    | EXIBIR TOTAL DE VENDAS |\n");
        printf("|   3    |           SAIR         |\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        system("CLS");
        switch (opcao)
        {
        case 1:

            if (totalVendas < MERCADO)
            {
                printf("Digite o nome do produto: ");
                scanf("%s", nomesProdutos[totalVendas]);

                printf("Digite o preço do produto: ");
                scanf("%f", &precos[totalVendas]);

                printf("Digite a quantidade vendida: ");
                scanf("%d", &quantidades[totalVendas]);

                totalGeral += precos[totalVendas] * quantidades[totalVendas];

                printf("Venda registrada com sucesso!\n");

                totalVendas++;
            }
            else
            {
                printf("A capacidade de vendas foi atingida.\n");
            }
            break;

        case 2:

            printf("\nTotal de vendas realizadas: R$%.2f\n", totalGeral);
            break;

        case 3:

            printf("Encerrando o programa. Até mais!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}