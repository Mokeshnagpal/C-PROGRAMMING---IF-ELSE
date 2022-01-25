#include <stdio.h>
#include <math.h>
void main()
{
    int a=0,b=0,c=0,y=0,m=0;
    double d=0.0,r1=0.0,r2=0.0,x=0.0;
    again:
    printf("INPUT THE VALUE OF a,b,c SUCH THAT ax^2 + bx + c = 0\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(double)(b*b-4*a*c);
    y=2*a;
    x=(double)-b/y;

    if(d<0)
    {
        printf("\nROOTS ARE IMAGINARY\nROOTS=\n");
        printf("%.2lf + sqrt(%.2lf)/%d AND ",x,d,y);
        printf("%.2lf - sqrt(%.2lf)/%d",x,d,y);
    }
    else if(d==0)
    {
        printf("\nROOTS ARE REAL AND EQUAL\nROOTS=\n");
        printf("%.2lf AND %.2lf",x,x);
    }
    else
    {
        printf("\nROOTS ARE REAL AND UNEQUAL\nROOTS=\n");
        r1=x+sqrt(d)/y;
        r2=x-sqrt(d)/y;
        printf("%.2lf AND %.2lf",r1,r2);
    }
    printf("\n\n\n\n");
    printf("IF YOU WANT TO CHECK ANOTHER A QUADRATIC EQUATION THEN PRESS 1 ELSE 0\n");
    scanf("%d",&m);
    if(m==1)
    {
        printf("\n\n\n\n\n\\n\n\n");
        goto again;
    }
}
