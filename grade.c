#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,t=0;
    double p=0.0;
    printf("Input marks in 5 different subjects=\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    t=a+b+c+d+e;
    p=t/5;
    printf("\nTOTAL = %d \nPERCENTAGE = %0.2lf\n",t,p);
    if(p>=80)
        printf("GRADE - E+");
    else if(p>=70)
        printf("GRADE - E");
    else if(p>=60)
        printf("GRADE - A+");
    else if(p>=50)
        printf("GRADE - A");
    else if(p>=40)
        printf("GRADE - B+");
    else
        printf("GRADE - Fail");
    return 0;
}
