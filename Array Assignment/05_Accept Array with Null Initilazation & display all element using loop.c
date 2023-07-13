#include<stdio.h>
#include<conio.h>
int main()
{
  int Arr[7] = {}, i = 0;

  for(i = 0; i < 7; i++)
  {
    printf("\nValue of Roll No %d = %d",i + 101, Arr[i]);
  }
  getch();

  system("cls");
  printf("\nEnter Array Elements => \n\n");

  for(i = 1; i < 7; i++)
  {
    printf("\nEnter Element[%d] = ",i + 101);
    scanf("%d",&Arr[i]);
  }
  for(i = 0; i < 7; i++)
  {
    printf("\nvalue of Roll No %d = %d",i = 501, Arr[i]);
  }
  printf("\n\nPress Any Key to continue.....");

  getch();
  return 0;
}
