#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[1001];
    scanf("%s", word);

    if(isupper(word[0]))
    {
        printf("%s\n", word);
    }
    else
    {
        word[0] = toupper(word[0]);
        printf("%s\n", word);
    }

    return 0;
}