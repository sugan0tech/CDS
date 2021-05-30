#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void main()
{
    int choice;
    printf("Enter 1 for array based implementation, 2 for linked list based implementation ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Array based implementaion is selected :)");
    }


    else if (choice == 2)
    {
        printf("Linked List based implementation is selected :)");
        int choice2,n;
        struct Node *Top=NULL,*new,*temp;

        do
        {
            printf("Enter the choice 1 for adding , 2 for printing, 3 for pop");
            scanf("%d", &choice2);

            switch(choice2)
            {
                case 1:
                    printf("\nEnter the num");
                    scanf("%d", &n);
                    new = (struct Node *)malloc(sizeof(struct Node));
                    new->data = n;
                    new->next = NULL;

                    if ( Top == NULL)
                    {
                        Top = new;
                        temp = Top;
                    }

                    else
                    {
                        new->next = Top;
                        Top = new;
                    }
                    break;

                case 2:
                    printf("Printing The Stack \n");
                    temp = Top;
                    printf("Top\n");

                    while (temp != NULL)
                    {
                        printf("%d\n", temp->data);
                        temp = temp->next;
                    }
                    printf("Base\n");
                    break;

                case 3:
                    printf("Top element is poped ");
                    temp = Top->next;
                    Top = temp;
                    break;

                default:

                    break;
            }
        }while(choice > 0);
    }
    

    else
    {
        printf("Invalid choice");
    }
}