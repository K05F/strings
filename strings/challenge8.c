#include <stdio.h>
int main()
{
    char str[]= "AZERTY";

    for (int i = 0; i < str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
    return 0;
}