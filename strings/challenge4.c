#include <stdio.h>
#include <string.h>

int main()
{
    char str[]= "azerty", str1[] = "azerby";
    
    if (strcmp(str, str1)== 0)
    {
        printf("les chaines sont egales");
    }
    else
        printf("les chaines sont differents");
    return 0;
}