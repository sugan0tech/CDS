#include<stdio.h>
void perfect(int[] ,int);
void main()
{
    int size, i;
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size ; i++)
    {
        scanf("%d", &arr[i]);
    }
    perfect(arr, size);
    // 20EUCS147
}
void perfect(int a[], int size)
{
    int i, j, temp;
    for (i = 0; i < size ; i++)
    {
        for (j = i + 1; j < size ; j++ )
        {
            if (a[i] == a[j])
            {
                temp = a[j];
            }
        }
        if (!(temp == a[i]))
        {
            printf("%d ", a[i]);
        }
    }
}