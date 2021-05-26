#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100], s2[100], i, boo = 1 , j = 0;
    printf("Enter the first string :");
    gets(s1);
    for ( i = 0; i < strlen(s1); i++)
    {
        printf("\n i %d j %d", i, j);
        printf("\n Start");
        if (s1[i] == ' ' && !boo)
        {
            printf("\nif 1");
            i++;
        }
        if (s1[i] == ' ' && boo)
        {
            boo = 0;
            s2[j] = s1[i];
        }
        if (!(s1[i] == ' '))
        {
            printf("\nif 2");
            boo = 1;
            s2[j] = s1[i];
        }
         
        j++;
        printf("\n i %d j %d", i, j);
        printf("\nTermination \n");
    }
    s2[j + 1] == '\0';
    for (i = 0; i < j; i++)
    {
        printf("%c", s2[i]);
    }
}