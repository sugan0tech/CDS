#include<stdio.h>
#include<string.h>

void main()
{
    FILE *fp, *fp2;
    char pre, ch;
    int boo = 1;
    fp = fopen("test.txt", "r");
    fp2 = fopen("test1.txt", "w");
    do 
    {
        pre = getc(fp);
        if (!boo)
        {
            putc(pre, fp2);
        }
        if(boo)
        {
            ch = pre - 32;
            putc(ch, fp2);
            boo = 0;
        }
        if (pre == ' ')
        {
            boo = 1;
        }
    }while (pre != EOF);
    fclose(fp);

}