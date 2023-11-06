#include<stdio.h>
#include<conio.h>

int Division()
{
    int N1 = 0, N2 = 0, Div = 0;

    printf("\n Enter Any Number  :");
    scanf("%d",&N1);

    printf("\n Enter Any Number  :");
    scanf("%d",&N2);

    Div = N1 / N2;

    printf("\n %d / %d = %d",N1,N2,Div);

    getch();
    return 0;
}
