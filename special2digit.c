#include <stdio.h>
int main()
{
    int x=0,a=0,b=0,c=0,m=1,s=0;
    printf("Input a 2 digit number=\n");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        c=b%10;
        b=b/10;
        x++;
        s=s+c;
        m=m*c;
    }
    if(x!=2)
        printf("%d is not a 2 digit number",a);
    else
    {
        s=s+m;
    if(s==a)
        printf("%d is a 2 digit special number",a);
    else
        printf("%d is not a special 2 digit number",a);
    }
    return 0;

}
