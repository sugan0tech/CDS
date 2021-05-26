#include<stdio.h>
int sum_to_single(int);
void main()
{
    int num;
    int res;
    scanf("%d", &num);
    res = sum_to_single(num);
    printf("%d", res);
}
int sum_to_single(int num)
{
    int temp = 0, i;
    while (num)
    {
        i = num/10;
        temp += num - i*10;
        num = i;
    }
    if (temp/10 == 0)
    {
        return temp;
    }
    else
    {
        return sum_to_single(temp);
    }
}