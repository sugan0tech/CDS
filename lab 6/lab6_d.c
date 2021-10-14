#include<stdio.h>
int main()
{   char c;
    FILE *f;
    int count = 0;
    int lines=1;
    f = fopen("test.txt","r");
    do{
        c=getc(f);
        if(c ==' ' || c == '\n')
            count++;
        if(c=='\n')
            lines++;
    }while(c!=EOF);
    printf("Number of words: %d\n", count);
    printf("Number of lines: %d",lines);
    fclose(f);

    return 0;
}