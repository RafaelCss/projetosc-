#include <stdio.h>
#include <string.h>

int main (void)

{
 

int amostradeTemperatura[3][4] ={{20,30,40,50},{20,20,20,10},{20,35,36,36}};
            
printf("\n Exemplo de acesso a Matriz Bidimensional");
printf("\n *---------------------------------------------*");

for (int indice = 0; indice < 3; indice++)
{
  
 printf("\n *-------Temperatura do Mes : %d --------*",indice+1);



 for (int indice_j = 0; indice_j < 4; indice_j++)
   {
      printf("\n Temperatura %d = %d ",indice_j+1,amostradeTemperatura[indice][indice_j]);
    
   }

}

return 0;

}