#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char *str;
    printf("Enter a string: ");
    scanf("%m[^*\n]", &str);

    int i, len = strlen(str), cnt_upper = 0, cnt_lower = 0;

    for (i = 0; i < len; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            cnt_upper++;
            str[i] = str[i] + 32;
        }

        else if (str[i] >= 97 && str[i] <= 122)
        {
            cnt_lower++;
            str[i] = str[i] - 32;
        }
    }
    printf("No. of upper case characters = %d\n", cnt_upper);
    printf("No. of lower case characters = %d\n", cnt_lower);
    printf("Case inverted string --> %s\n", str);

    return 0;
}
