#include<stdio.h>
#include<conio.h>

int Modulo()
{
    int N1 = 0, N2 = 0, Modulo = 0;

    printf("\n Enter Any Number  :");
    scanf("%d",&N1);

    printf("\n Enter Any Number  :");
    scanf("%d",&N2);

    Modulo = N1 % N2;

    printf("\n %d %% %d = %d",N1, N2, Modulo);

    getch();
    return 0;
}
