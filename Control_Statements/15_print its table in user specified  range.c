#include<stdio.h>
#include<conio.h>

int main()
{
int S_No = 0, E_No = 0, r = 0, c = 0;

printf("\nEnter Start No =");
scanf("%d",&S_No);

printf("\nEnter End No =");
scanf("%d",&E_No);

printf("\n\nTable in Range %d to %d =>",S_No,E_No);

printf("\n===========************===============\n\n");
for(r = 1; r <= 10; r++)
{
  for(c = S_No; c <= E_No; c++)
    {
   printf("%4d", r * c);
    }
    printf("\n");
  }
  printf("\n===========================================\n");

  getch();
  return 0;
}
