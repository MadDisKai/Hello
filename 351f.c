#include<stdio.h>
#include <math.h>

int main(void) {

    int n, m = 1;
    system("cls");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        // i = 1, 2, 3, ,4 , 5
        m *= i;
    }
    printf("%d", m);
}