#include<stdio.h>
#include<conio.h>
struct stud
{
    char Nm[8];
    char city [12];
    int R_No;
    float per;
};

int main()
{
   struct stud std;

   printf("\n Size of structure object : %d",sizeof(std));

   getch();
   return 0;
}
