#include<stdio.h>
#include<conio.h>

int main()
{
  char ch ='\0';

  printf("\n Enter a character is Owelles =");
  scanf("%c",&ch);

  switch(ch)
  {
   case'A':
   case'a':
   case'E':
   case'e':
   case'I':
   case'i':
   case'O':
   case'o':
   case'U':
   case'u':

       printf("\nGiven character is owelles");
       break;

   default:
       printf("\nGien character is Alphabate");
       break;
  }
  printf("\n\nThanks!!!...");

  getch();
  return 0;
}
