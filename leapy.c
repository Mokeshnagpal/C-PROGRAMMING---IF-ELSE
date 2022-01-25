//write a program to find leap years
#include <stdio.h>

void main()
{
    int a=0,b=0,c=0,d=0;
    printf("INPUT A YEAR= \n");
    scanf("%d",&a);
    b=a%100;
    c=a%4;
    d=a%400;
    if(d==0)
        printf("\n\n%d is a leap year\n\n",a);
        else
            {
                 if(c==0&&b!=0)
                    printf("\n\n%d is a leap year\n\n",a);
                 else
                    printf("\n\n%d is not a leap year\n\n",a);
            }

}
