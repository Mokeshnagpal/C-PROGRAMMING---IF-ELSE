#include <stdio.h>
int main()
{
    int a=0;
    double d=0.0;
    printf("Input total amount spend on purchase=\n");
    scanf("%d",&a);
        if(a<=2000)
        d=((100-5)*a)/100;
        else if(a<=5000)
            d=((100-25)*a)/100;
        else if(a<10000)
            d=((100-35)*a)/100;
        else
            d=((100-50)*a)/100;
    printf("\nNet amount to be paid=%0.2lf",d);
    return 0;
}
