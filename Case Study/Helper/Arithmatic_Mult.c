#include<stdio.h>
#include<conio.h>

int Multiply()
{
    int N1 = 0, N2 = 0, Multiply = 0;

    printf("\n Enter Any Number  :");
    scanf("%d",&N1);

    printf("\n Enter Any Number  :");
    scanf("%d",&N2);

    Multiply = N1 * N2;

    printf("\n %d * %d = %d",N1,N2,Multiply);

    getch();
    return 0;
}
