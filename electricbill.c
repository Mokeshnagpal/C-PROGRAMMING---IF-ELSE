#include <stdio.h>
int main()
{
    int U=0,c=0;
    printf("Input units =\n");
    scanf("%d",&U);
    if(U<=100)
        c=40*U;
    else if(U<=300)
        c=50*(U-100)+40*100;
    else
        c=50*200+40*100+60*(U-300);
    printf("\nTOTAL COSTS=%d",c);
    return 0;
}
