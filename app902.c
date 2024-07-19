#include <stdio.h>
#include <string.h>
void callUseName()
{
    // Declarative string
    char fistName[] = "";
    char lastName[] = "";

    printf("Enter strings of First name:");
    scanf("%s", fistName);
    printf("%s\n", fistName);

    printf("Enter strings of Last name:");
    scanf("%s", lastName);
    printf("%s", lastName);
}