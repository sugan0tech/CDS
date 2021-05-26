#include<stdio.h>
void main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i;
    printf("array is[ ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");
    int res[4] , rm_idx, j = 0;
    printf("Enter the index to remove :");
    scanf("%d", &rm_idx);
    for ( i = 0; i < 4; i++)
    {
        if( i == rm_idx)
        {
            j++;
        }
        res[i] = arr[j];
        j++;
    }
    printf("resultant array is[ ");
    for ( i = 0; i < 4; i++)
    {
        printf("%d ", res[i]);
    }
    printf("]");
    
}