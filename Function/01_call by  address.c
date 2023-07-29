#include<stdio.h>
#include<conio.h>

void find_max(int*,int*,int*);

int main()
{
  int N1 = 0, N2 = 0, max = 0;

  printf("\nEnter two No's = ");
  scanf("%d%d",&N1,&N2);

  find_max(&N1, &N2, &max);

  if(max == -2)
  {
    printf("invalid");
  }
  else if(max == -1)
  {
    printf("Equal");
  }
  else
  {
    printf("\nMaximum is = %d",max);
  }
  getch();
  return 0;
}

void find_max(int*p1, int*p2, int*p3)
{
  if(*p1 < 0 || *p2 < 0)
  {
    *p3 = -2;
  }
  else if(*p1 == *p2)
  {
    *p3 = -1;
  }
  else if(*p1 > *p2)
  {
  *p3 = *p1;
  }
  else
  {
  *p3 = *p2;
  }
}
