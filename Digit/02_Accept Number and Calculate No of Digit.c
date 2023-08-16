#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dcnt = 0;

    printf("\nEnter a Positive Number=");
    scanf("%d",&No);

    for(Temp = No; Temp > 0; Temp /= 10)
    {
        Dcnt++;
    }
    printf("\nEnter Sum of %d is = %d",No,Dcnt);

    getch();
    return 0;

}
