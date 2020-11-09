#include <stdio.h>

int main(){

  int num;

  printf("Escreva um número de 1 a 10:\n");
  scanf("%i", &num);

    for (int i = 1; i <= 10; i++)
    {
      printf("%i X %i = %i\n", num,i,num*i);
    }
    
  return 0;
}