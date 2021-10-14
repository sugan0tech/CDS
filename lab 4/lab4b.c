#include<stdio.h>
void main()
{
    int size, first, last, i, count = 0, boo;
    printf("Enter the size of array :");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d th element", i);
        scanf("%d",&arr[i]);
    }
    first = arr[0];
    for(i = 0; i< size; i++)
    {
        if(arr[i] < first)
        {
            first = arr[i];
        }
    }
    last = 0;
    for(i = 0; i< size; i++)
    {
        if(arr[i] > last)
        {
            last = arr[i];
        }
    }
    last = arr[size - 1];
    for (i = first; i < last ; i++)
    {
        boo = 1;
        for(count = 0; count < size; count++)
        {
            if (i == arr[count])
            {
                boo = 0;
            }
        }
        if (boo)
        {
            printf("%d is the missing number ", i);
        }
        count++;
    }
    //20EUCS147

}