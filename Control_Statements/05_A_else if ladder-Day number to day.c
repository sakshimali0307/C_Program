#include<stdio.h>
#include<conio.h>

int main()
{
 int Day =0;

 printf("\nEnter Day Number (1-7)to View Day Text =");
 scanf("%d",&Day);

 if(Day ==1)
 {
   printf("\nMonday");
 }
 else if(Day ==2)
 {
   printf("\nTuesday");
 }
 else if(Day ==3)
 {
   printf("\nWednesday");
 }
  else if(Day ==4)
 {
   printf("\nThursday");
 }
 else if(Day ==5)
 {
   printf("\nFriday");
 }
 else if(Day ==6)
 {
   printf("\nSaturday");
 }
 else if(Day ==7)
 {
   printf("\nSunday");
 }
 else
 {
   printf("Invalid Day");
 }
 printf("\nThanks!!!...");

 getch();
 return 0;
}
