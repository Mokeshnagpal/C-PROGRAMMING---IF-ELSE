#include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    printf("Input marks obtained in mathamatics=\n");
    scanf("%d",&a);
    printf("Input marks obtained in science=\n");
    scanf("%d",&b);
    printf("Input marks obtained in english=\n");
    scanf("%d",&c);
    printf("\n");
    if(a>=80&&b>=80&&c>=35)
        printf("PURE SCIENCE");
    else if(a>=60&&b>=80&&c>=80)
        printf("BIO. SCIENCE");
    else if(a>=60&&b>=60&&c>=60)
        printf("COMMERCE");
    else
        printf("NO STREAM GRANTED");
        return 0;
}

