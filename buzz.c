#include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    printf("Input a number=\n");
    scanf("%d",&a);
    b=a%10;
    c=a%7;
    if(b==7||
       c==0)
        printf("%d is a buzz number",a);
    else
        printf("%d is not a buzz number",a);
        return 0;
}
