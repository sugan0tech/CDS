#include<stdio.h>
int binary(int num, int a[8], int i);
void main()
{
    int num, a[8], i, b[8];
    scanf("%d", &num);
    binary(num, a, 0);
}
int binary(int num, int a[8], int i)
{
    a[i] = num%2;
    num = num/2;
    i += 1;
    printf("%d", a[i - 1]);
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return binary(num, a, i);
    }

}