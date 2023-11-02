#include<stdio.h>
#include<conio.h>
int Add();

int main()
{
    printf("\n Addition = %d",Add());
    return 0;
    getch();
}
int Add()
{
    int a,b,c;
    printf("\nEnter The Two Values :");
    scanf("%d%d",&a,&b);

    c = a+b;

    return c;

}
