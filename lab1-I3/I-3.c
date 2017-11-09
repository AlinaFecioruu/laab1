#include<stdio.h>
#include<string.h>
int main()
{
    char sir[256];
    printf("The first and the last name:", gets(sir));
    printf("\n The name with uppercases is: %s", strupr(sir));
    printf("\n");
    printf("\n The name with lowercases is: %s", strlwr(sir));
    printf("\n");


}
