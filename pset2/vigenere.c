#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("error\n");
        return 1;
    }
    int m = strlen(argv[1]);
    for (int i = 0; i < m; i++)
    {
        if (isalpha( argv[1][i]) == false)
        {
            printf("error\n");
            return 1;
        }
    }
    string text = get_string();
    for (int i = 0, j = 0, result = 0, n = strlen(text); i < n; i++)
    {
        char letter = text[i];
        char num = argv[1][(j) % m];
        if (isupper(num))
        {
           num -= 65;
        }
        else if (islower(num))
        {
           num -= 97;
        }
        if (isupper(letter))
        {
            result = (letter + num - 65) % 26 + 65;
            j++;
        }
        else if (islower(letter))
        {
           result = (letter  + num - 97) % 26 + 97;
           j++;
        }
        else
        {
           result = letter;
        }
           printf("%c", result);
    }
    printf("\n");
}