#include<stdio.h>
#define SWAP(t,x,y) t=x; x=y; y=t

int main()
{
    int x,y,t;
    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);

    SWAP (t,x,y);
    printf ("\n %d %d", x,y);

}
