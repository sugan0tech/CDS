#include<stdio.h>
#define size 10

int hash(int a)
{
    return a%10;
}

void insert(int arr[], int val)
{
    int key = hash(val);
    if (arr[key] == -1) 
    {
        arr[key] = val;
    }
    else if (arr[key] != -1)
    {
        int i = key, j = 1;
        while (arr[key] != -1)
        {
            key = hash(i + j*j);
            if (arr[key] == -1)
            {
                arr[key] = val;
                break;
            }
            j++;
            
        }
        
    }
    
    
}
void main()
{
    int val, key, hash_table[size];
    for (int i = 0; i < size; i++)
    {
        hash_table[i] = -1;
    }
    
    printf("Enter the val :");
    scanf("%d", &val);
    insert(hash_table, val);
    while(val != -1)
    {
        printf("\nEnter the val :");
        scanf("%d", &val);
        insert(hash_table, val);
    }

    for (int i = 0; i < size; i++)
    {
        if (hash_table[i] == -1)
        {
            printf("\nkey :%d -> val :Empty", i);
            continue;
        }
        
        printf("\nkey :%d -> val :%d",i , hash_table[i]);
    }
    
}