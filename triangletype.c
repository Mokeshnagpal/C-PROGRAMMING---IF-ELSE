#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,t=0;
    printf("Input 3 sides of the triangle(cm)=\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b&&a==c)
        printf("TRIANGLE IS EQILATERAL\n");
    else if(a==b||a==c)
        printf("TRIANGLE IS ISOCELES\n");
    else
        printf("TRIANGLE IS SCALENE\n");
        return 0;
}
