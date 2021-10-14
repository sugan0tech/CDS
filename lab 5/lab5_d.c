#include <stdio.h>
#include <string.h>

void main()
{
    char usr_str[100], compare[1], *stp;
    int i, n, count = 0;
    printf("Enter the string :");
    gets(usr_str);
    printf("Enter the char :");
    scanf("%c", compare);
    n = strlen(usr_str);
    stp = &compare;
    for (i = 0; i < n; i++)
    {
        if(*stp == usr_str[i])
        {
            count += 1;
        }
    }
    printf("The count is %d", count);

}