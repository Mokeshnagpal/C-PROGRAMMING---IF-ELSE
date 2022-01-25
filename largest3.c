#include <stdio.h>
void main()
{
    double a=0.0;
    double b=0.0;
    double c=0.0;
    printf("Input a number\n");
    scanf("%lf",&a);
    printf("Input another number\n");
    scanf("%lf",&b);
    printf("Input another number\n");
    scanf("%lf",&c);
    if(a>b&&a>c)
        printf("%0.2lf is largest",a);
    else if(a<b&&b>c)
        printf("%0.2lf is largest",b);
    else if(a<c&&b<c)
        printf("%0.2lf is largest",c);
    else
        printf("All three numbers are same");
}
