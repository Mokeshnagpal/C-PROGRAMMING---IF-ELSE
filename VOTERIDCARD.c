//Roll No - RD2102B85
//PROVISIONAL REGISTRATION NUMBER-12111002
//SECTION-2102
//NAME-MOKESH NAGPAL
//WRITE A PROGRAM TO DISPLAY SOMETHING
#include <stdio.h>    //CALLING INPUT-OUTPUT HEADER
int main()    //MAIN PROGRAM BEGINS
{
    int a=0;
    char n[30];
    printf("PLEASE ENTER YOUR NAME\n");
    scanf("%[^\n]",n);    //INITIALISATION
    printf("PLEASE ENTER YOUR AGE\n");
    scanf("%d",&a);
    printf("\n\n\n\n");
    printf("\tHELLO EVERYONE MY NAME IS %s\n",n);
    printf("\tHOW ARE YOU\n\tBTW I AM FINE\n");
    if(a>=18)
    printf("\tMY AGE IS %d SO I AM QUALIFIED FOR A VOTER ID CARD",a);    //PRINTING
    else
    printf("\tMY AGE IS %d SO I AM DISQUALIFIED FOR A VOTER ID CARD",a);    //PRINTING
    printf("\n\n\n\n\n");
    return 0;
}
