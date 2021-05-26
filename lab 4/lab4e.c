#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100], s2[100], i, boo = 1 ;
    printf("Enter the first string :");
    scanf("%s", s1);
    printf("Enter the second string :");
    scanf("%s", s2);
    if (strlen(s1) == strlen(s2))
    for ( i = 0; i < strlen(s1); i++)
    {
        if(s1[i] != s2[i])
        {
            printf("Not the Same");
            boo = 0;
            break;
        }
    }
    else
    {
        printf("Not the same");
        boo = 0;
    }
    if(boo)
    {
        printf("Both are same ");
    }
    
}