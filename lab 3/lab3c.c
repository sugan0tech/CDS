#include<stdio.h>
void factors(int);
void main()
{
    int num;
    scanf("%d", &num);
    factors(num);
}
void factors(int num)
{
    int temp = 0, i;
    for (i = 1; i <= num ; i++)
    {
        if (num%i == 0)
        {
            temp++;
        }
    }
    printf("%d has %d factors", num, temp);
}