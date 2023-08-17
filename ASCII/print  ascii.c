#include<stdio.h>
#include<conio.h>

int main()
{
  int i = 0;

    printf("\nASCII table = %d\n");

    for(i = 1; i <= 128; i++)
    {
       printf("\n%d = %c",i,i);
    }

  printf("\nThanks..");
  getch();
  return 0;
}
