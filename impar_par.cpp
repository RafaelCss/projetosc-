#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int num;
int par_impar[10];


void impar_par(){


    printf("*----------Digite 10 numeros por favor:-------------*");

 for (size_t i = 0; i < 10 ; i++)
 {

    printf("\n Digite o %d numero :",i+1);
    scanf("%d",&num); 

    
    if(num % 2 == 0)
    {
    par_impar[i] = num * 10;    
    }else
    {
    par_impar[i] = num  + 5; 
    }


 }
 

}




int main(){
impar_par();

printf("\n**************************************************");
printf(" \n Vetores : ");
for ( int inh = 0; inh < 10; inh++)
{

printf("%d ", par_impar[inh]);

}

return 0;
}
