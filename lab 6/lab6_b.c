#include<stdio.h>
int main()
{
    char a;
    FILE *f1,*f2;
    f1=fopen("test.txt","r");
    f2=fopen("test1.txt","w");
    do
    {
        a=getc(f1);
        putc(a,f2);
    }while(a!=EOF);
    printf("Content of the file is transferred.");
    fclose(f1);
    fclose(f2);
    return 0;
}