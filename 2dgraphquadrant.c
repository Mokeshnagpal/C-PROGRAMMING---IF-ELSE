#include <stdio.h>
int main()
{
    int x=0,y=0;
    printf("INPUT THE VALUE OF x AND y\n");
    scanf("%d%d",&x,&y);
    if(x==0&&y==0)
        printf("CENTER POINT");
    else if((x>0&&y>0)||(x==0&&y>0)||(x>0&&y==0))
        printf("1ST QUADRANT");
    else if((x<0&&y>0)||(x==0&&y>0)||(x<0&&y==0))
        printf("2ND QUADRANT");
    else if((x<0&&y<0)||(x==0&&y<0)||(x<0&&y==0))
        printf("3RD QUADRANT");
    else if((x>0&&y<0)||(x==0&&y<0)||(x>0&&y==0))
        printf("4TH QUADRANT");
    return 0;
}
