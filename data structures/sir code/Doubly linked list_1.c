#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
int main()
{
    int choice,n,nodeaft,nodedel;
    struct Node*head=NULL,*neww,*temp,*temp2,*temp3;
    do
    {
        printf("Enter ur choice 1.Create2.Display 3.Ins@first 4.Ins@last 5.Ins@mid6.Del@first7.Del@last8.Del@mid");
        scanf("%d",&choice);
        switch(choice)
        {
           case 1:
           printf("Enter the number(other than 0): ");
           scanf("%d",&n);
           while(n!=0){
            neww=(struct Node*)malloc(sizeof(struct Node));
            neww->data=n;
            neww->next=NULL;
            neww->prev=NULL;
            if(head==NULL)
            {
                head=neww;
                temp = head;
            }
            else
            {
                temp->next=neww;
                neww->prev=temp;
                temp = neww;
            }
            printf("Enter the number(other than 0): ");
            scanf("%d",&n);
           }
           break;
           case 2:
            temp=head;
            while(temp!=NULL)
            {
                printf("%d->",temp->data);
                temp = temp->next;
            }
            printf("NULL");
            break;
            case 3:
            printf("Enter the number(other than 0): ");
            scanf("%d",&n);
            neww=(struct Node*)malloc(sizeof(struct Node));
            neww->data=n;
            neww->next=NULL;
            neww->prev=NULL;
            temp = head;
            neww->next=head;
            head->prev=neww;
            head = neww;
            break;
            case 4:
            printf("Enter the number(other than 0): ");
            scanf("%d",&n);
            neww=(struct Node*)malloc(sizeof(struct Node));
            neww->data=n;
            neww->next=NULL;
            neww->prev=NULL;
            temp=head;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next = neww;
            neww->prev = temp;
            break;
            case 5:
            printf("Enter the number(other than 0): ");
            scanf("%d",&n);
            printf("Enter the nodeaft element:");
            scanf("%d",&nodeaft);
            neww=(struct Node*)malloc(sizeof(struct Node));
            neww->data=n;
            neww->next=NULL;
            neww->prev=NULL;
            temp=head;
            while(temp->next!=NULL)
            {
                if(temp->data==nodeaft)break;
                  temp=temp->next;
            }
            temp2 = temp->next;
            temp->next = neww;
            neww->prev = temp;
            neww->next = temp2;
            temp2->prev=neww;
            break;
            case 6:
                temp = head;
                head= head->next;
                head->prev=NULL;
                free(temp);
            break;
            case 7:
                temp=head;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp2=temp->prev;
                temp2->next=NULL;
                free(temp);
                break;
            case 8:
                printf("Enter the node to be deleted:");
                scanf("%d",&nodedel);
                temp=head;
                while(temp->next!=NULL)
                {
                    if(temp->data==nodedel)
                        break;
                    temp=temp->next;
                }
                temp2=temp->prev;
                temp3=temp->next;
                temp2->next=temp3;
                temp3->prev=temp2;
                free(temp);
                break;
        }
    }while(choice<=8);
    return 0;
}
