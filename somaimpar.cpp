#include <stdio.h>
#include <string.h>

int vetor[5] ={3,5,6,8,10};
int resultado = 0 ;

int main()
{
printf("----------------------------------------------------------");
printf("\n Soma dos numeros impares do vetor:");    

  for(int i = 0 ; i <= 5; i++){

      if (vetor[i] % 2 != 0)
      {
         resultado += vetor[i];
      }


  }
printf("%d", resultado);
    return 0;
}