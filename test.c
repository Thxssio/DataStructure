/*
* Aluno Thássio Gomes Silva
* Engenharia de Computação
* Disciplina Struct_data
*
*/


#include <stdio.h>
#include <math.h>

float notas[4] = {0,0,0,0};
int n = sizeof(notas) / sizeof(notas[0]);
float sum = 0.0;
float media;

int main(void)
{ 

  printf("Digite a Nota 1: ");
  scanf("%f", &notas[1]);
  printf("Digite a Nota 2: ");
  scanf("%f", &notas[2]);
  printf("Digite a Nota 3: ");
  scanf("%f", &notas[3]);
  printf("Digite a Nota 4: ");
  scanf("%f", &notas[4]);
  
  printf("Exibindo os Valores do Vetor \n\n");
  printf("notas[1] = %.1f\n", notas[1]);
  printf("notas[2] = %.1f\n", notas[2]);
  printf("notas[3] = %.1f\n", notas[3]);
  printf("notas[4] = %.1f\n", notas[4]);
  
  for (int i = 0; i < n; i++) {
        sum += notas[i];
    }
    
  media = sum/n;
  printf("A quantidade de notas é: %.1d\n", n); 
  printf("A soma de todas as notas é igual a: %.2f\n", sum);
  printf("A media aritmetica é: %.2f\n", media);
  if (media > 7.0){
  	return printf("Aluno Aprovado(a)\n");
  }  
  else{
  	return printf("Aluno reprovado(a)\n");
  }
  
     
}
