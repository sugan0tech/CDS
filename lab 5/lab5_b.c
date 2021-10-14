#include <stdio.h>

struct student {
    char Name[100];
    int total;
    
};

void main()
{
    int i, n, max = 0, temp = 0;
    printf("Enter the number of students :");
    scanf("%d", &n);
    struct student lstarr[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the student %d name :", i + 1);
        scanf("%s", lstarr[i].Name);
        printf("\nEnter the student %d total :", i + 1);
        scanf("%d", &lstarr[i].total);

    }
    for (i = 0; i < n; i++)
    {
        if (lstarr[i].total > max)
        {
            max = lstarr[i].total;
            temp = i;
        }
    }
    printf("\n First ranker is %s", lstarr[temp].Name);
    lstarr[temp].total = 0;
    max = 0;
    for (i = 0; i < n; i++)
    {
        if (lstarr[i].total > max)
        {
            max = lstarr[i].total;
            temp = i;
        }
    }
    printf("\n second ranker is %s", lstarr[temp].Name);
    lstarr[temp].total = 0;
    max = 0;
    for (i = 0; i < n; i++)
    {
        if (lstarr[i].total > max)
        {
            max = lstarr[i].total;
            temp = i;
        }
    }
    printf("\n third ranker is %s", lstarr[temp].Name);
}