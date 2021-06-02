#include<stdio.h>
#include<string.h>
// #define size 10
// char stack[size];

int opre(char);

void main()
{
    char arr[100], stack[10];
    int i, temp, Top = -1;
    stack[Top] = 0;
    scanf("%s", arr);
    for(i = 0; i <= strlen(arr); i++)
    {
        if(opre(arr[i]) > 0)
        {
            printf("\n%c", arr[i]);
            printf("%d \n ---- \n", opre(arr[i]));
        }
        if(opre(arr[i]) > 0)
        {
            if(Top == -1)
            {
                stack[++Top] = arr[i];
                printf("Top");
            }
            else
            {
                if (opre(arr[i]) > opre(stack[Top]))
                {
                    printf("worked");
                    stack[++Top] = arr[i];
                }
                else
                {
                    Top--;
                    i--;
                }
                
            }
        }

    }
    printf("The stack is\n");
        printf("%s", stack);
    for(i = 0; i <= Top ; i++)
    {
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
        default:
            return -1;
    }
}

void push()
{
}