#include<stdio.h>
void adj_sum(int a[], int);
void main()
{
    int size, i;
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size ; i++)
    {
        scanf("%d", &arr[i]);
    }
    adj_sum(arr, size);
    //20EUCS147
}
void adj_sum(int a[], int size)
{
    int i;
    for (i = 0; i < size ; i++)
    {
        if (i == 0)
        {
            printf("%d ", a[1]);
        }
        else if (i == (size - 1))
        {
            printf("%d ", a[i - 1]);
        }
        else
        {
            printf("%d ", (a[i - 1] + a[i + 1]));
        }
    }
}