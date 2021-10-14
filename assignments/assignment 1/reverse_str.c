#include<stdio.h>
void revrse(char[] ,int);
void main()
{
    int size = 10;
    char st[10] = "Goodstring";
    printf("%s", st);
    revrse(st, size);
    //20EUCS147
}
void revrse(char st[], int size)
{
    printf("%c", st[size - 1]);
    size--;
    if (size != 0)
    {
        return revrse(st, size);
    }
}