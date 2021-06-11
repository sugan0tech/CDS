#include<stdio.h>
#include<stdlib.h>
#define size 5
char stack[size], eq[10], res[10];
int Top = -1, base = 0, i, j, boo = 1;


void push(char);
char pop();
void display();
int opre(char);
void validate(char);
void special(char);


void main()
{
    printf("\n Enter the string :");
    scanf("%s", eq);
    printf("\n the string %s\n", eq);
    for(i = 0; i < 10; i++) 
    {
        
        if(opre(eq[i]) < 0) 
        {
            printf("%c", eq[i]);
        }
        else if(eq[i] == '(')
        {
            boo = 0;
        }
        else if(eq[i] == ')')
        {
            boo = 1;
        }
        else if (!boo)
        {
            special(eq[i]);
        }
        else if(opre(eq[i]) > 0 && boo)
        {
            validate(eq[i]);
        }
    }
    for(i = Top; i >= 0; i--)
    {
        
        printf("%c", stack[i]);
    }
    

}


void push(char ch)
{
    if (Top == size - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        Top++;
        stack[Top] = ch;
    }
}

char pop()
{
    if(Top == -1)
    {
        printf("error occured ");
    }
    else
    {
        Top--;
        return stack[Top + 1];
    }
}

void display()
{
    int i;
    for(i = 0; i <= Top; i++)
    {
        printf("%c", stack[i]);
    }
}

int opre(char ch)
{
    switch(ch)
    {
        case '-':
            return 1;
        case '+':
            return 1;
        case '*':
            return 2;
        case '/':
            return 2;
        case '^':
            return 3;
        case '(':
            return 4;
        case ')':
            return 4;
        default:
            return -1;
    }
}
void validate(char ch)
{
    First:
    if (Top == -1)
    {
        push(ch);
    }
    else if (opre(ch) > opre(stack[Top]))
    {
        push(ch);
    }
    else
    {

        printf("%c",pop());
        goto First;
    }
    
}

void special(char ch)
{
    char lim = Top;
    First:
    if (Top == lim)
    {
        push(ch);
    }
    else if (opre(ch) > opre(stack[Top]) && Top > lim)
    {
        push(ch);
    }
    else 
    {

        if (lim > Top)
        {
            printf("%c",pop());
            goto First;
        }
        
    }
}

// void validate(char ch)
// {
//     char loop;
//     Here:
//     if (Top == -1)
//     {
//         push(ch);
//     }
//     else
//     {
//         if (ch == '(')
//         {
//             boo = 0;
//         }
//         if (opre(ch) > opre(stack[Top]) && boo)
//         {
//             push(ch);
//         }
//         else if (boo)
//         {
//             printf("%c", pop());
//             goto Here;
//         }
//         else if (boo == 0)
//         {
//             Here2:
//             if (ch == ')')
//             {
//                 boo = 1;
//                 loop = pop();
//                 while(loop != '(')
//                 {
//                     printf("%c loop\n", loop);
//                     loop = pop();
//                 }
//                 pop();
//             }
//             if (stack[Top] == '(')
//             {
//                 push(ch);
//             }
//             else if (opre(ch) > opre(stack[Top]))
//             {
//                 push(ch);
//             }
//             else
//             {
//                 printf("\n%c in else\n", pop());
//                 goto Here2;
//             }
//         }
//     }
// }