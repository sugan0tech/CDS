#include<stdio.h>
struct Node
{
    int data;
    struct Node *next; //SRS
};
int main()
{
    int choice,n,nodeaft;
    struct Node *head=NULL,*neww,*temp;
    do
    {
       printf("1.Creation2.Display3.Ins@1 4.Ins@last5.Ins@mid");
       scanf("%d",&choice);
       switch(choice)
       {
          case 1:

                 printf("Enter the number(other than 0):");
                 scanf("%d",&n);
                 while(n!=0)
                 {
                   neww=(struct Node*)malloc(sizeof(struct Node));
                   neww->data=n;
                   if(head==NULL)
                   {
                      head = neww;
                      neww->next = head;
                      temp=head;
                   }
                   else
                   {
                       temp->next = neww;
                       neww->next=head;
                       temp = neww;
                   }
                   printf("Enter the number(other than 0):");
                   scanf("%d",&n);
                 }
                break;
          case 2:
                 temp = head;
                 while(temp->next!=head)
                 {
                     printf("%d->",temp->data);
                     temp=temp->next;
                 }
                 printf("%d",temp->data);
                 break;
          case 3:
                 printf("Enter the number:");
                 scanf("%d",&n);
                 neww=(struct Node*)malloc(sizeof(struct Node));
                 neww->data=n;
                 temp = head;
                 while(temp->next!=head)
                    temp = temp->next;
                 neww->next=head;
                 head = neww;
                 temp->next = head;
                 break;
            case 4:
                 printf("Enter the number:");
                 scanf("%d",&n);
                 neww=(struct Node*)malloc(sizeof(struct Node));
                 neww->data=n;
                 temp = head;
                 while(temp->next!=head)
                    temp = temp->next;
                 temp->next= neww;
                 neww->next= head;
                 break;
             case 5:
                 printf("Enter the number:");
                 scanf("%d",&n);
                 printf("Enter the nodeafter:");
                 scanf("%d",&nodeaft);
                 neww=(struct Node*)malloc(sizeof(struct Node));
                 neww->data=n;
                 temp = head;
                 while(temp->next!=head){
                        if(temp->data==nodeaft)
                        break;
                 temp = temp->next;
                 }
                  neww->next = temp->next;
                  temp->next = neww;
                 break;
       }
       }while(choice<=5);
}
