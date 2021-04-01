#include<stdio.h>
#include<locale.h>



int elements[15];


int main(){

setlocale(LC_ALL,"Portuguese");

printf("-------------------------------------------------------");

printf("\n --------Progrma retorna Par------\n");


for (size_t i = 0; i < 15 ; i++)
{
    printf("Digite o %d : ",i +1);
    scanf("%d", &elements[i]);
}

printf("\n-------------------------------------------------------");
printf("\nEsses sao os numeros pares:");
for (size_t i = 0; i < 15 ; i++)
{
    if (elements[i] % 2 == 0)
    {
        printf(" %d ",elements[i]);
    }
    
}
printf("\n\n");

return 0;
}