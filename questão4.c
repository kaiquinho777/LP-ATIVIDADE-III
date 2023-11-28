#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    int a;
    int numeros[5];
    int maiorNumero;
    int menorNumero = 999;
    int numerosNegativos = 0;
    int numerosPositivos;
    int numerosPares = 0;
    int numerosImpares = 0;
    int somaPares = 0;
    int somaImpares = 0;
    int contador = 0;
    float mediaPares = 0;
    float mediaTotal;
    float somaTotal;

    for (a = 0; a < 5; a++)
    {
        printf("Digite o %d� n�mero:", a + 1);
        scanf("%d", &numeros[a]);
        contador++;

        if (numeros[a] < 0)
        {
            numerosNegativos++;
        }
        if (numeros[a] > 0)
        {
            numerosPositivos++;
        }
        if (numeros[a] % 2 == 1)
        {
            numerosImpares++;
            somaImpares += numeros[a];
        }
        else
        {
            numerosPares++;
            somaPares += numeros[a];
        }

        maiorNumero = numeros[a] > maiorNumero ? numeros[a] : maiorNumero;
        menorNumero = numeros[a] < menorNumero ? numeros[a] : menorNumero;

        somaTotal += numeros[a];
    }

    if (numerosPares != 0)
    {
        mediaPares = somaPares / numerosPares;
    }

    mediaTotal = somaTotal / contador;

    system("CLS || CLEAR");

    printf("\nMaior n�mero:%d\n", maiorNumero);
    printf("\nMenor n�mero:%d\n", menorNumero);
    printf("\nN�meros negativos:%d\n", numerosNegativos);
    printf("\nN�meros �mpares:%d\n", numerosImpares);
    printf("\nQuantidade de n�meros :%d\n", contador);
    printf("\nM�dia total:%.2f\n", mediaTotal);
    printf("\nM�dia pares:%.2f\n", mediaPares);

}