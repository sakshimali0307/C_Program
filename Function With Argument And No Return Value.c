#include<stdio.h>
#include<conio.h>
void fun(int, int);

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&No1);
    printf("\n Enter 2nd Number = ");
    scanf("%d",&No2);

    fun(No1, No2);
    return 0;

}
void fun(int Num1, int Num2)
{
    int Sum = 0;
    Sum = Num1 + Num2;
    printf("\n Addition = %d",Sum);
}
