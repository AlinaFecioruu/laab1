#include<stdio.h>
#define MULTIPLY(x,y) x*y

int main()
{
    long int x,y,k;
    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);
    k=MULTIPLY(x,y);
    printf("\n%d", k);
}
