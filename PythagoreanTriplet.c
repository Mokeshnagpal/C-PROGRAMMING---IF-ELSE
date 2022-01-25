#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,m=0;
    printf("INPUT THE VALUE OF a,b,c =\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<0||b<0||c<0)
        printf("INPUT A POSITIVE NUMBER");
    else
    {
        if(a>=b&&a>=c)
        {
            m=b*b+c*c;
            if(m==(a*a))
                printf("THE NUMBERS ARE PYTHAGORAS TRIPLETS");
            else
                printf("THE NUMBERS ARE NOT PYTHAGORAS TRIPLETS");
        }
        else if(a<=b&&b>=c)
        {
            m=a*a+c*c;
            if(m==(b*b))
                printf("THE NUMBERS ARE PYTHAGORAS TRIPLETS");
            else
                printf("THE NUMBERS ARE NOT PYTHAGORAS TRIPLETS");
        }
        else if(c>=b&&a<=c)
        {
            m=b*b+a*a;
            if(m==(c*c))
                printf("THE NUMBERS ARE PYTHAGORAS TRIPLETS");
            else
                printf("THE NUMBERS ARE NOT PYTHAGORAS TRIPLETS");
        }
    }
    return 0;
}
