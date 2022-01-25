#include <stdio.h>
int main()
{
    int p=0,c=0,m=0,t=0;
    printf("Input marks in physics,chemistry,maths simultaneously=\n");
    scanf("%d",&p);
    scanf("%d",&c);
    scanf("%d",&m);
    t=p+c+m;
    if(m>=60&&p>=50&&c>=40&&t>=200)
        printf("\nTHE CANDIDATE IS ELIGIBLE FOR ADMISSION");
    else if((m+p)>=150)
        printf("\nTHE CANDIDATE IS ELIGIBLE FOR ADMISSION");
    else
        printf("\nTHE CANDIDATE NOT IS ELIGIBLE FOR ADMISSION");
    return 0;
}
