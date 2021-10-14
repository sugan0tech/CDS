#include<stdio.h>
int main()
{
    FILE *f;
    char a;
    f=fopen("test.txt","r");
    while(a!=EOF){
        a=getc(f);
        printf("%c",a);
    }
    fclose(f);
    return 0;
}