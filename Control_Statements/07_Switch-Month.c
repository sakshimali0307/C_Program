#include<stdio.h>
#include<conio.h>

int main()
{
 int Month =0;

 printf("\nEnter A Month Number(1-12) =");
 scanf("%d",&Month);

 switch(Month)
{
 case 1:
    printf("\nJanuary");
    break;

 case 2:
    printf("\nfebruary");
    break;

 case 3:
    printf("\nMarch");
    break;

 case 4:
    printf("\nApril");
    break;

 case 5:
    printf("\nMay");
    break;

 case 6:
    printf("\nJune");
    break;

 case 7:
    printf("\nJuly");
    break;

 case 8:
    printf("\nAugust");
    break;

 case 9:
    printf("\nSeptamber");
    break;

 case 10:
    printf("\nOctomber");
    break;

 case 11:
    printf("\nNovember");
    break;

 case 12:
    printf("\nDecember");
    break;

  default:
    printf("\nInvalid Month");
    break;
}
 printf("\nThanks!!!...");

 getch();
 return 0;
}


