#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void){

printf("\n Programa retorna modulo das divisoes ");
printf("\n-------------------------------------------");

int valorA, valorB;

printf("\n Digite o primeiro valor: ");
scanf("%d", &valorA);

printf("\n Digite o segundo valor: ");
scanf("%d", &valorB);

printf("\n -----------------------------------------------");

int resto = calculaResto( valorA , valorB);

printf("\n O resto da operacao e : %d ", resto);


printf("\n\n");


}

int calculaResto(a, b){


    return (a % b);
}