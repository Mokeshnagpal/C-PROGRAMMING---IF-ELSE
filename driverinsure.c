#include <stdio.h>
int main()
{
    char m,s;
    int a=0;
    printf("Input marital status\nS for single\nM for married\n");
    scanf("%c",&m);
    fflush(stdin);
    printf("\nInput sex\nM for male\nF for female\n");
    scanf("%c",&s);
    fflush(stdin);
    printf("\nInput age\n");
    scanf("%d",&a);
    if(m=='M'||m=='m')
        printf("The driver can be insured by the company");
    else if(a>30&&(s=='m'||s=='M'))
        printf("The driver can be insured by the company");
    else if(a>25)
        printf("The driver can be insured by the company");
    return 0;
}
