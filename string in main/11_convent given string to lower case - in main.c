#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int i = 0;

    printf("\n Enter a given string =");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
            cSrc[i] = cSrc[i] + 32;
        }
        i++;
    }
    printf("\n Given string is after converting to lowercase = %s.",cSrc);

    getch();
    return 0;
}
