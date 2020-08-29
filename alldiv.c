#include<stdio.h>
#include<math.h>

int main(void){

    int x;
    int i;
    i=0;
    system("cls");
    printf("Write down a natural number\n");
    scanf("%d", &x);
    printf("All divisors: \n");
        
    while(i<x)
    {
      i=i+1;
      if(x % i == 0)
      {
     printf( "%d\n", i);
      } 
      }
    
        return 0;
    }