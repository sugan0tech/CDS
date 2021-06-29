#include<stdio.h>
void main()
{
    int size, i, total = 0, *arrp;
    printf("give the arr size");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the arr elements \n");
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d :", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i< size; i++)
    {
        arrp = &arr[i];
        total += *arrp;
    }
    printf("The total sum is %d", total);
    //20EUCS147
}