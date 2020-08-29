#include<stdio.h>
#include <math.h>

int main(void) {

    int x;
    system("cls");
    printf("Write down a year\n");
    
    scanf("%d", &x);

    if((x<0) || (x>30000)){
        printf("Wrong format, repeat\n");
        scanf("%d", &x);
    }

    printf("\n");

    float y=x%4; 
    float z=x%100;
    float t=x%400;

    
    
    if ( (y == 0) && (z != 0) || (t == 0)){
        printf("YES");
    }
  else{
      printf("NO");
                    

  }
    return 0;
}