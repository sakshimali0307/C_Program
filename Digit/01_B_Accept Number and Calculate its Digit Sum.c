#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dsum;

    printf("\nEnter a positive number = ");
    scanf("%d",&No);

    for(Temp = No; Temp > 0; Temp /= 10)
    {
        Dsum += Temp % 10;
    }
    printf("\nEnter sum od %d is = %d",No,Dsum);

    getch();
    return 0;
}
