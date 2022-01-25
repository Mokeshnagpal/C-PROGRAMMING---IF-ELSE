#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,m=0,s=0,x=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        c=a%10;
        a=a/10;
        s=c*pow(10,m)+s;
        m++;
        if(s==b)
        {
            x++;
            printf("%d is automorphic",b);
            break;
        }
    }
    if(x==0)
        printf("%d is not automorphic",b);
    return 0;
}
