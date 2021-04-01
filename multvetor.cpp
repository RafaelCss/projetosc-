#include <stdio.h>

int vet_a[5] ={10,5,6,6,8};
int vet_b[5]={10,5,6,8,4}; 
int result;



    void multiplicacao()
    {
        // multiplicação de um por um abaixo:
        
        printf("\n Resultado da multiplicacao : ");

        for (size_t i = 0; i < 5 ; i++)
        {
            result = vet_b[i] * vet_a[i];
            printf("%d ",result);
        }

//multiplicação de todos x todos abaixo:
       /* 

        for (size_t i = 0; i < 5; i++)
        {
            result += vet_a[i];
        }
        

    for (size_t i = 0; i < 5; i++)
        {
            result += vet_b[i];
        }
        

    printf("\n Resultado da multiplicacao: %d",result*result);


*/

    
    };

    int main()
{ 

    printf("\n*************************************");
    printf("\n");
    printf("\n Mutiplicacao dos vetores");
    printf("\n");
    printf("\nNumeros do vetor A:");
    for (size_t i = 0; i < 5; i++)
    {
        printf(" %d, ",vet_a[i]);
    }
    printf("\n");
    printf("\n-----------------------------------");
    printf("\n");
    printf("\nNumeros do vetor B:");
    for (size_t i = 0; i < 5; i++)
    {
        printf(" %d, ",vet_b[i]);
    }

    printf("\n");
    printf("\n***********************************");

multiplicacao();
    return 0;}