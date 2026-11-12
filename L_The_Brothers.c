#include <stdio.h>
#include <string.h>

int main()
{

    char first_first[101];
    char first_last[101];
    char second_first[101];
    char second_last[101];

    scanf("%s %s %s %s", first_first, first_last, second_first, second_last);

    int result = strcmp(first_last, second_last);

    if (result == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}