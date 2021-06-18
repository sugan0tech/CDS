#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    int priority;
    struct Node *next;
};
int main()
{
    struct Node *front=NULL,*rear=NULL,*temp,*neww;
    int choice,ele,prior;
    do
    {
        printf("1.Insertion 2.Deletion 3.DIsplay");
        scanf("%d",&choice);
        switch(choice)
        {
           case 1:
                   printf("Enter the data:");
                   scanf("%d",&ele);
                   printf("Enter the priority:");
                   scanf("%d",&prior);
                   neww=(struct Node*)malloc(sizeof(struct Node));
                   neww->data=ele;
                   neww->priority=prior;
                   neww->next=NULL;
                   if(front==NULL)
                   {
                       front  = neww;
                       rear = front;
                   }
                   else{
                       if(neww->priority<front->priority)
                        {
                            neww->next=front;
                            front = neww;
                        }
                        else if(neww->priority >rear->priority)
                        {
                            rear->next = neww;
                            rear = neww;
                        }
                        else{
                          temp=front;
                          while(temp->next!=NULL)
                          {
                              if(neww->priority>temp->priority && neww->priority<temp->next->priority)
                              {
                                  neww->next  = temp->next;
                                  temp->next = neww;
                                  break;
                              }
                             temp =temp->next;
                          }
                        }
                   }
           break;
           case 2:
                    if(front==NULL)
                        printf("Queue is empty0");
                    else
                    {
                        temp=front;
                        front = front->next;
                        free(temp);
                    }
           break;
           case 3:
                if(front==NULL)
                    printf("QUeue is empty");
                else{
                    temp=front;
                    while(temp!=NULL)
                    {
                        printf("[%d %d] ->",temp->data,temp->priority);
                        temp=temp->next;
                    }
                }
           break;
        }

    }while(choice<=3);


    return 0;
}
