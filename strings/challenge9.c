#include <stdio.h>

int main()
{
    char str[]= "azer rty bgh ";
    int a = 0;
  
    for (int i = 0; i < str[i]; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            str[a++] = str[i];
        }
    }
    printf("%s", str[a]);
    return 0;
}