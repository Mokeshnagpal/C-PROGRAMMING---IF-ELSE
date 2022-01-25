#include <stdio.h>
void main()
{
    double a=0.0;
    double b=0.0;
    printf("Input a number\n");
    scanf("%lf",&a);
    printf("Input another number\n");
    scanf("%lf",&b);
    if(a<b)
        printf("%0.2lf is smallest",a);
    else if(a>b)
        printf("%0.2lf is smallest",b);
    else
            printf("Both are same");
}
