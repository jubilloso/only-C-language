#include <stdlib.h>
#include <stdio.h>

int main(){
int num;
   do{
      printf("Digite um numero:");
       scanf("%d",&num);
       if (num != 0 && num != 9)
       {
          if (num % 2 == 0) printf ("O sucessor de %d é %d",num, num + 1);
          else printf("O antecessor de %d é %d",num,num-1);
      }
    
    } while (num != 0 && num !=9);

     return 0;



}