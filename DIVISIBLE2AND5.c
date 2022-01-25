#include <stdio.h>
void main()
{
    int a=0;
    printf("Input a number\n");
    scanf("%d",&a);
    if(a%2==0&&a%5==0)
        printf("%d is divisible by 2 and 5",a);
    else if(a%2==0&&a%5!=0)
        printf("%d is divisible by 2 only",a);
    else if(a%2!=0&&a%5==0)
        printf("%d is divisible by 5",a);
}
