#include<stdio.h>
#include<conio.h>
int main()

{
 int sal =0,Is_stud =0;

 printf("\nEnter Your Salary =");
 scanf("%d",&sal);

 printf("\nEnter 1 if you are a student =");
 scanf("%d",&Is_stud);

 if(sal <= 0)
 {
  if(Is_stud == 0)
  {
   printf("\ncandidate is student");
  }
  else
  {
   printf("\ncandidate is Fresher");
  }
 }
else

{
 if(sal > 50000)
{
 printf("\ncandidate is an Expert Employee");
}
 else
 {
  printf("\ncandidate is an Begineer Employee");
 }
}

printf("\nThanks!!!...");

getch();
return 0;
}
