#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *Top, *temp;

void push();
void pop();
void display();

void main()
{
    push();
    push();
    push();
    push();
    pop();
    display();
}

void push()
{
    int n;
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the num :");
    scanf("%d", &n);
    new->data = n;
    new->next = NULL;
    if (Top == NULL)
    {
        Top = new;
        Top->next = NULL;
    }
    else 
    {
        new->next = Top;
        Top = new;
    }
    printf("pushed \n");
}

void pop()
{
    temp = Top;
    Top = temp->next;
}
void display()
{
    temp = Top;
    while(temp != NULL)
    {
        printf("\n%d\n", temp->data);
        temp = temp->next;
    }
    printf("Done with printing \n");
}
