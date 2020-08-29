#include<stdio.h>
#include<math.h>

int main(void){

int n, a,i, sum;
system("cls");

printf("Write down a quantity of numbers you want to sum\n");
scanf("%d", &n);

printf("Write down numbers you want to sum\n");
sum = 0;
for(i=1; i<=n; i++)
{
    scanf("%d",&a);
    sum = sum + a;
}
printf("Result: %d", sum);
return 0;
}