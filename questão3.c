#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define contatosPermitidos 50

struct Contato
{
    char nome[50];
    char telefone[15];
};

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct Contato agenda[contatosPermitidos];

    int opcao;
    int totalContatos = 0;
    int a;

    do
    {

        printf("| Codigo |        FUNÇÃO     |\n");
        printf("|   1    | ADICIONAR CONTATO |\n");
        printf("|   2    |   EXIBIR CONTATOS |\n");
        printf("|   3    |         SAIR      |\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        system("CLS");

        switch (opcao)
        {
        case 1:

            if (totalContatos < contatosPermitidos)
            {
                printf("Digite o nome: ");
                scanf("%s", agenda[totalContatos].nome);

                printf("Digite o telefone: ");
                scanf("%s", agenda[totalContatos].telefone);

                printf("Contato adicionado com sucesso!\n\n");

                totalContatos++;
            }
            else
            {
                printf("A agenda está cheia. Não é possível adicionar mais contatos.\n\n");
            }
            break;

        case 2:

            if (totalContatos > 0)
            {
                printf("\nContatos cadastrados:\n");
                for (a = 0; a < totalContatos; a++)
                {
                    printf("Nome: %s, Telefone: %s\n\n", agenda[a].nome, agenda[a].telefone);
                }
            }
            else
            {
                printf("\nNenhum contato cadastrado.\n");
            }
            break;

        case 3:
            printf("ENCERRADO\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);
    
    return 0;
}