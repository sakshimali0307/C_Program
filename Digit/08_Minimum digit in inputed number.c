#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0,Temp = 0, Min = 0;

    printf("\n Enter a positive number =");
    scanf("%d",&No);

    Temp = No;
    Min = Temp % 10;
    while(Temp > 0)
    {
        Dig = Temp % 10;
        if(Min > Dig)
        {
        Min = Dig;
        }
        Temp = Temp / 10;
    }
    printf("Minimum number in %d is = %d",No,Min);

    getch();
    return 0;
}
