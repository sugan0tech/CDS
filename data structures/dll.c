#include<stdio.h>

struct Node
{
    int data;
    struct Node* pre;
    struct Node* nxt
};

void main()
{
    struct Node *head=NULL, *neww, *temp, *last;
    int n, choice;
    do
    {
        printf("Enter the choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the num :");
            scanf("%d", &n);
            while (n != 0)
            {
            
                neww = (struct Node *)malloc(sizeof(struct Node));
                neww->data = n;
                if (head == NULL)
                {
                    head = neww;
                    temp = head;
                    head->pre = NULL;
                }
                else 
                {
                    temp->nxt = neww;
                    neww->pre = temp;
                    temp = neww;
                    temp->nxt = NULL;
                    last = temp;
                }
                printf("Enter the num :");
                scanf("%d", &n);
                }
            break;

        case 2:
            printf("%d \n", head->data);
            temp = head;
            do {
                printf("%d -> ", temp->data);
                temp = temp->nxt;
            }while (temp != NULL);
            
            break;
        case 3:
            printf("%d \n", head->data);
            temp = last;
            do {
                printf("%d -> ", temp->data);
                temp = temp->pre;
            }while (temp != NULL);
            
            break;
        }
    } while (choice != 0);

}