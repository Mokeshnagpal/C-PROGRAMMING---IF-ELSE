#include <stdio.h>
int main()
{
    int c=0,w=0;
    printf("Input weight=\n");
    scanf("%d",&w);
    if(w<=10)
        c=w*20;
    else if(w<=30)
        c=10*20+(w-10)*10;
    else if(w<=50)
        c=10*20+20*10+8*(w-30);
    else
        c=10*20+20*10+8*20+5*(w-50);
        printf("\nCHARGE=%d",c);
    return 0;
}
