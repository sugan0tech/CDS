//insertion and deletion on arraby based implementaion of a linked list
#include<stdio.h>
#include<stdlib.h>
int size = 0, i, limit, arr[10], Head = -1;

void display();
void insert(int);
void delete(int);

void main()
{
    int num, choice;
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
                    insert(num);
                    printf("\n Enter the num");
                    scanf("%d",&num);
                }
                
                break;
            case 2:
                display();
                break;
        }
        printf("\nEnter the coice");
        scanf("%d",&choice);
    } while (choice);
    

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
void insert(int num)
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