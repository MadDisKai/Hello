#include<stdio.h>
#include <math.h>

int main(void) {

    int n, s=2;
    system("cls");
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        s*=2;
    }
    printf("%d", s);

}