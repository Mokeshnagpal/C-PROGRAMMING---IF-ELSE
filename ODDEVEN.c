#include <stdio.h>
void main()
{
    int a=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("\n\n%d is a Even number",a);
    else
        printf("\n\n%d is an Odd number",a);

}
