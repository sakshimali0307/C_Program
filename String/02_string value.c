#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = "Unknown";
    char FName[20] = "Jack Fruit";

    printf("\nName string value = %s.",Name);
    printf("\nFName string value = %s.",FName);

    getch();

    strcpy(Name,"Harry");
    printf("\nNew name string value = %s.",Name);

    getch();

    strcpy(Name,FName);
    printf("\nUpdated Name string value = %s.",Name);

    getch();
    return 0;
}
