#include <stdio.h>
int main()
{
    char str[] = "aazeqsdwxcvyuihjk";
    char alpha = 'r';
    int counter = 0;

    for (int i = 0; i < str[i]; i++)
    {
        if (str[i] == alpha)
        {
            counter++;
        }
    }
    printf("%d", counter);
    return 0;
}