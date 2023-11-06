#include<stdio.h>
#include<conio.h>

int Add()
{
    int N1 = 0, N2 = 0, Sum = 0;

    printf("\n Enter Any Number  :");
    scanf("%d",&N1);

    printf("\n Enter Any Number  :");
    scanf("%d",&N2);

    Sum = N1 + N2;

    printf("\n %d + %d = %d",N1,N2,Sum);

    getch();
    return 0;
}
