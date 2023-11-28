#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {   
    setlocale (LC_ALL, "portuguese");

float altura[5];
float peso[5];  
char nome[5][500];
int idade[5];
int i;
float maiorAltura =0;
float menorAltura = 999;
float maiorPeso =0;
float menorPeso = 999;
int maiorIdade = 0;
int menorIdade = 999;

for ( i = 0; i < 2; i++)
{
    
 printf ("\nInforme o nome do %d Úsuario:", i + 1);
scanf ("%s", &nome);
    
fflush (stdin);
     
     printf ("Informe a idade de %s: ", nome[i]);
     scanf ("%d", &idade[i]);
     
     printf ("Informe o peso de %s: ", nome[i]);
     scanf ("%f", &peso[i]);
     
     printf ("Informe a altura de %s: ", nome[i]);
     scanf ("%f", &altura[i]);

 fflush (stdin);
maiorIdade = idade[i] > maiorIdade ? idade[i]: maiorIdade;
menorIdade = idade[i]< menorIdade ? idade[i] : menorIdade;
maiorPeso = peso[i]> maiorPeso ? peso[i] : maiorPeso;
menorPeso = peso[i]< menorPeso ? peso[i] : menorPeso;
menorAltura = altura[i]> maiorAltura ? altura[i] : maiorAltura;
maiorAltura = altura[i]< menorAltura ? altura[i] : menorAltura;
}

printf ("Maior idade: %d\n", maiorIdade);
printf ("Menor idade: %d\n", menorIdade);
printf ("Maior peso: %.1f\n", maiorPeso);
printf ("Menor peso: %.1f\n", menorPeso);
printf ("Maior Altura: %.1f\n", maiorAltura);
printf ("Menor Altura: %.1f\n", menorAltura);
}