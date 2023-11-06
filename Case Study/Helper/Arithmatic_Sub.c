#include<stdio.h>
#include<conio.h>

int Subtract()
{
    int N1 = 0, N2 = 0, Sub = 0;

    printf("\n Enter Any Number  :");
    scanf("%d",&N1);

    printf("\n Enter Any Number  :");
    scanf("%d",&N2);

    Sub = N1 - N2;

    printf("\n %d - %d = %d",N1,N2,Sub);

    getch();
    return 0;
}
