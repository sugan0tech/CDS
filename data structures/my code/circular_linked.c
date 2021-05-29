#include <stdio.h>

struct Node {
    int  data;
    struct Node *next;
};

void main() {
    int choice, n;
    struct Node *head = NULL, *neww, *temp;
    do 
    {
        printf("Enter the choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter number other than zero :");
            scanf("%d", &n);
            while (n != 0)
            {
                neww = (struct Node *)malloc(sizeof(struct Node));
                neww->data = n;
                if (head != NULL)
                {
                    head = neww;
                    head->next = head;
                    temp = head;
                    printf("%d",head->data);
                }
                else
                {
                    temp->next = neww;
                    neww->next = head;
                    temp = neww;
                }
                printf("Enter number other than zero :");
                scanf("%d", &n);
            }
            
            break;
        
        case 2:
            printf("\n %d \n", temp->data);
            temp = head;
            printf("\n %d \n", temp->data);
            while (temp->next != head)
            {
                printf("%d ->", temp->data);
                temp = temp->next;
            }
            break;
        default:
            break;
        }
    }while (choice != 0);
    
}