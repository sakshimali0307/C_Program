#include<stdio.h>
#include<conio.h>
void fun();

int main()
{
    fun();
    return 0;
}
void fun()
{
    int N1 = 0, N2 = 0, Add;

    printf("\n Enter 1st Number =");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number =");
    scanf("%d",&N2);

    Add = N1 + N2;

    printf("\n Addition = %d",Add);

}
