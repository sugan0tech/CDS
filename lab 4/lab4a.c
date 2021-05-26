 #include<stdio.h>
void main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, temp = 0, i, ival;
    for(i = 0; i < 10; i++)
    {
        if (a[i] > temp)
        {
            temp = a[i];
            ival = i;
        }
    }
    temp = 0;
    for(i = 0; i < 10; i++)
    {
        if ((a[i] > temp)&(i != ival))
        {
            temp = a[i];
        }
    }
    printf("%d ", temp);
    //20EUCS147
}