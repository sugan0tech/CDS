#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int choice,n,nodeaft,deletel;
    struct Node *head=NULL,*temp,*neww,*temp2,*prev;
    do
    {
        printf("1.creation 2.Display 3.Insert@first 4.Ins@last 5.Ins@mid");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:
          printf("ENter the number other than 0");
          scanf("%d",&n);
          while(n!=0)
          {
              neww=(struct Node *)malloc(sizeof(struct Node));
              neww->data=n;
              neww->next=NULL;
              if(head==NULL)
              {
                  head=neww;
                  temp=head;
              }
              else
              {
                  temp->next = neww;
                  temp = neww;
              }
              printf("ENter the number other than 0");
              scanf("%d",&n);
          }
          break;
          case 2:
            temp=head;
            while(temp!=NULL)
            {
                printf("%d->",temp->data);
                temp=temp->next;
            }
            printf("NULL");
            break;
          case 3:
              printf("ENter the new value");
              scanf("%d",&n);
              neww=(struct Node *)malloc(sizeof(struct Node));
              neww->data=n;
              neww->next = head;
              head = neww;
              temp = head;
          break;
          case 4:
              printf("ENter the new value");
              scanf("%d",&n);
              neww=(struct Node *)malloc(sizeof(struct Node));
              neww->data=n;
              neww->next=NULL;
              temp = head;
              while(temp->next!=NULL)
                temp = temp->next;
              temp->next=neww;
          break;
          case 5:
              printf("ENter the new value");
              scanf("%d",&n);
              printf("Enter the node after:");
              scanf("%d",&nodeaft);
              neww=(struct Node *)malloc(sizeof(struct Node));
              neww->data=n;
              temp = head;
              while(temp!=NULL)
              {
                  if(temp->data==nodeaft)
                         break;
                  temp = temp->next;
              }
                 neww->next= temp->next;;
                 temp->next = neww;
        }
    }while(choice!=0);

    return 0;
}
