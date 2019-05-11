#include <cstring>
#include <cstdio>
int main()
{
    char str[90];
    fgets(str, 90, stdin);
    char str1[90][90];
    int r = 0, h = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            str1[r][h] = str[i];
            h++;
        }
        else
        {
            str1[r][h] = '\0';
            r++;
            h = 0;
        }
    }
    str1[r][h] = '\0';
    for (int i = r; i >= 0; i--)
    {
        printf("%s", str1[i]);
        if (i > 0)
        {
            printf(" ");
        }
    }
    return 0;
}