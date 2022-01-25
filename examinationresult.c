#include <stdio.h>
int main()
{
    int a=0;
    printf("Input marks obtained int the examination=\n");
    scanf("%d",&a);
    printf("\n");
    if(a>=80)
        printf("DISTINCTION");
    else if(a>=60)
        printf("FIRST DIVISION");
    else if(a>=45)
        printf("SECOND DIVISION");
    else if(a>=40)
        printf("PASS");
    else
        printf("PROMOTION NOT GRANTED");
    return 0;
}
