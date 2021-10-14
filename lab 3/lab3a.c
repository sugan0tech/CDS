#include<stdio.h>
void find_mod(int);
void main()
{
    int num;
    scanf("%d", &num);
    find_mod(num);
}
void find_mod(int num)
{
    if (num < 0)
    {
        printf("NEGATIVE");
    }
    else if (num > 0)
    {
        printf("POSITIVE");
    }
    else
    {
        printf("ZERO");
    }
}