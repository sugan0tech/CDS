#include<stdio.h>

struct students
{
    char name[30];
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int total;
    float percentage;
};

int main()
{
    int i,a;
    float b, res;

    printf("Enter the no.of students: ");
    scanf("%d",&a);
    struct students perc[a];

    for (i=0; i<a ;i++)
    {
        printf("Enter Student %d Name: ",i+1);
        scanf("%s",&perc[i].name);
        printf("Enter English mark: ");
        scanf("%d",&perc[i].sub1);
        printf("Enter Tamil mark: ");
        scanf("%d",&perc[i].sub2);
        printf("Enter Mathematics mark: ");
        scanf("%d",&perc[i].sub3);
        printf("Enter Science mark: ");
        scanf("%d",&perc[i].sub4);
        printf("Enter Social Science mark: ");
        scanf("%d",&perc[i].sub5);
        perc[i].total=perc[i].sub1+perc[i].sub2+perc[i].sub3+perc[i].sub4+perc[i].sub5;
        perc[i].percentage=(float)(perc[i].total)/500.00*100.00;
        printf("Total percentage:%.2f",perc[i].percentage);
    }
    for(i = 0; i < a ; i++)
    {
        res += perc[i].percentage;
    }
    res = res/a;
    printf("Total percentage %.2f", res);
    return 0;
}