#include <stdio.h>
int main()
{
    double temp=0.0;
    printf("Input temperature in celcius=\n");
    scanf("%lf",&temp);
    if(temp<=0)
        printf("VERY COLD");
    else if(temp<=10)
        printf("COLD");
    else if(temp<=20)
        printf("COOL OUT");
    else if(temp<=30)
        printf("WARM");
    else
        printf("HOT");
    return 0;
}
