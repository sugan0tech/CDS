#include <stdio.h>
struct Node
{
    int data ;
    struct Node *next;
    
};


void main(){
    int n;
    struct Node *head = NULL, *temp, *new, *temp2;
    printf("Enter the num :");
    scanf("%d", &n);
    while (n != 0)
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        new->data = n;
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            temp = head;
        }
        else 
        {
            temp->next = new;
            temp = new;
        }
        printf("Enter the num :");
        scanf("%d", &n);
    }
    int opt, i, j, count;
    do
    {
        printf("0 to exit, 1 to add new head,  2 to add new last, 3 to print");
        printf("Enter the option : ");
        scanf("%d", &opt);
        i = sizeof(struct Node);
        printf("\n size of the node %d ", i);
        switch (opt)
        {
        case 1:
            printf("Enter the num to add to the head :");
            scanf("%d", &n);
            new = (struct Node *)malloc(sizeof(struct Node));
            new->data= n;
            new->next= head;
            head = new;
            break;

        case 2:
            temp = head;
            printf("\n Enter the num to be adde in the last :");
            scanf("%d", &n);
            new = (struct Node *)malloc(sizeof(struct Node));
            new->data = n;
            new->next = NULL;
            while (temp->next != NULL)
            {
                printf("%d", temp->data);
                temp = temp->next;
            }
            temp->next = new;
            break;
            
        case 3:
            printf("\n printing the linked list \n");
            temp = head;
            while (temp != NULL)
            {
                printf("%d -> ", temp->data);
                temp = temp->next;
            }
            printf("NULL \n");

        default:
            break;
        }

    } while (opt != 0);

}