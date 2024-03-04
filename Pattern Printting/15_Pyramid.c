#include<stdio.h>
#include<conio.h>
int main()
{
    int n=0,i=0,j=0;

    printf("\n Enter Size For Pattern :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j >= n-(i-1) && j <= n+(i-1))
            {
                printf("*");
            }
            else
            {
               printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
