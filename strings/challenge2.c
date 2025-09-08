#include <stdio.h>

int main()
{
    char str[50];
    int counter = 0;
    printf("enter a string : ");
    scanf("%s", &str);

    while (str[counter] != '\0')
    {
        counter++;
    }
    printf("%d", counter);

    return 0;
}