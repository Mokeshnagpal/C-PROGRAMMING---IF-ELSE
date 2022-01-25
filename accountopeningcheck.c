#include <stdio.h>
int main()
{
    int a=0;
    printf("Input age\n");
    scanf("%d",&a);
    if(a>=18)
        printf("\nBANK ACCOUNT GRANTED");
    else
        printf("\nBANK ACCOUNT NOT GRANTED");
    return 0;
}
