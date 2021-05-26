#include<stdio.h>
void main()
{
    int arr[10], n = 10, i, res[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d th number", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        res[i] = *(arr + i);
    }

    for (i = 0; i < n; i++)
    {
        printf("The number is %d \n", res[i]);
    }

}