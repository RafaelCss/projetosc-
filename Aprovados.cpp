#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int main (void){

 setlocale(LC_ALL,"Portuguese") ;

float notas[10];
int aprovados = 0,reprovados =0;
int index_j;



printf("\n *--------------------------*");

for (size_t index = 0; index < 10; index++)
{
  printf("\n Informe a %d nota :",index + 1);

  scanf("%f",&notas[index]);//pega o que foidigitado e salva na var notas

  if (notas[index] >= 7){

    aprovados ++; // add na var aprovados 
  }else {

    reprovados++; // add na var reprovados
  }
  
}
 
printf("\n *--------------------------*");

for (size_t i = 0; i < 10; i++)

{
  printf("\nNota do Aluno %d : %.2f",i+1,notas[i]); // escreve todas as notas e seus indices dentro do array
}

printf("\n *--------------------------*");


printf("\n Essa e a quantidade de Alunos aprovados: %d",aprovados);

printf("\n Essa e a quantidade de Alunos reprovados: %d",reprovados);

printf("\n *--------------------------*");
  
printf("\n Essas são as notas das posições 7:%.2f, 9:%.2f",notas[6],notas[8]);

return 0;
}