
#include<stdio.h>
void is_perfect_num(int);
void main()
{
    int num;
    scanf("%d", &num);
    is_perfect_num(num);
    // 20EUCS147

}
void is_perfect_num(int num)
{
    int temp = 0, i;
    for (i = 1;i < num; i++)
    {
        if (num%i == 0)
        {
            temp += i;
        }
    }
    if (temp == num)
    {
        printf("It is a perfect number !");
    }
    else 
    {
        printf("It is not a perfect number :(");
    }
}