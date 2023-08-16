#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Zcnt = 0;

    printf("\nEnter a Positive Number =");
    scanf("%d",&No);

    for(Temp = No; Temp > 0; Temp /= 10)
    {
        if((Temp % 10) == 0)
        {
            Zcnt++;
        }
    }
    printf("\nEnter sum of %d is = %d",No,Zcnt);

    getch();
    return 0;
}
