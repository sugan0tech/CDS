#include<stdio.h>
#include<string.h>
int check_vow(char);
void main()
{
    char s1[100], i ;
    printf("Enter the string :");
    scanf("%s", s1);
    for ( i = 0; i < strlen(s1); i++)
    {
        if(!check_vow(s1[i]))
        {
            printf("%c", s1[i]);
        }
    }
    
}
int check_vow(char t)
{
    if (t == 'a' || t == 'A' || t == 'e' || t == 'E' || t == 'i' || t == 'I' || t =='o' || t=='O' || t == 'u' || t == 'U')
        return 1;
    else
        return 0;
}