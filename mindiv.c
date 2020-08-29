#include<stdio.h>
#include<math.h>

int main(void){

    int x;
    int i;
    i=1;
    
    printf("Write down a natural number(>1)\n");
    scanf("%d", &x);

    while(i<=x)
    {
      i=i+1;
      if( x % i == 0){
     printf("Minimum divisor: %d\n", i);
        break;
      }
    }
        return 0;
    }
    