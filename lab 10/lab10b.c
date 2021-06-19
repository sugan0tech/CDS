#include<stdio.h>
#include<ctype.h>

int stack[20], top = -1;

void push(int);
int pop();

void main()
{
    char exp[20];
    char *e;
    int num0,num1,num2,num4;
    printf("\nEnter the expression: ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            num0 = *e - 48;
            push(num0);
        }
        else
        {
            num1 = pop();
            num2 = pop();
            switch(*e)
            {
            case '+':
                num4 = num1 + num2;
                break;
            case '-':
                num4 = num2 - num1;
                break;
            case '*':
                num4 = num1 * num2;
                break;
            case '/':
                num4 = num2 / num1;
                break;
            }
            push(num4);

        }
        e++;

    }


    printf("\nThe result of expression %s  =  %d", exp, pop());
}

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}
