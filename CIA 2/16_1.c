//insertion and deletion on arraby based implementaion of a linked list
#include<stdio.h>
#include<stdlib.h>
int size = 0, i, limit, arr[20], Head = -1;

void display();
void create(int);
void delete(int);
void insert(int, int);

void main()
{
    int num, choice, ind;
    printf("\nEnter the coice");
    scanf("%d",&choice);
    do
    {
        switch(choice)
        {
            case 1:
                printf("\n Enter the num");
                scanf("%d",&num);
                while (num)
                {
                    create(num);
                    printf("\n Enter the num");
                    scanf("%d",&num);
                }
                
                break;
            case 2:
                display();
                break;
            case 3:
                printf("\n Enter the num");
                scanf("%d",&num);
                printf("\n Enter the index");
                scanf("%d",&ind);
                insert(num, ind);
                break;
            case 4:
                break;
        }
        printf("\nEnter the coice");
        scanf("%d",&choice);
    } while (choice);
    

}
void create(int num)
{
    if (Head == -1)
    {
        Head = 0;
        arr[0] = num;
    }
    else
    {
        size++;
        arr[size] = num;
    }
}

void display()
{
    printf("\n printing the linked list \n");
    for(i = 0; i <= size; i++)
    {
        printf(" %d ->", arr[i]);
    }
    printf("NULL\n");
}

void insert(int num, int pos)
{
    int temp, temp2, i;
    for (i = 0; i <= size; i++)
    {
        printf(" %d ", i);
        if (i == pos)
        {
            temp = arr[i];
            arr[i] = num;
            size++;
        }
        else if (i > pos)
        {
            temp2 = arr[i];
            arr[i] = temp;
            temp = temp2;
        }
    }
    
}