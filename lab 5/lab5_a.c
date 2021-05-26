#include <stdio.h>

struct student {
    char Name[100];
    int Roll_no;
    char dept[10];
    char mobile[10];
    
};

void main()
{
    int n, i;
    printf("Enter the number of students :");
    scanf("%d", &n);
    struct student lstarr[n];
    for (i = 0; i <= n; i++)
    {
        printf("\nEnter the student %d name :", i + 1);
        scanf("%s", lstarr[i].Name);
        printf("\nEnter the student %d Roll_no :", i + 1);
        scanf("%d", &lstarr[i].Roll_no);
        printf("\nEnter the student %d dept :", i + 1);
        scanf("%s", lstarr[i].dept);
        printf("\nEnter the student %d mobile :", i + 1);
        scanf("%s", lstarr[i].mobile);

    }
    for (i = 0; i <= n; i++)
    {
        printf("\nthe student %d name is : %s", i + 1, lstarr[i].Name);
        printf("\nthe student %d Roll_no is : %d", i + 1, lstarr[i].Roll_no);
        printf("\nthe student %d dept is : %s", i + 1, lstarr[i].dept);
        printf("\nthe student %d mobile is : %s ", i + 1, lstarr[i].mobile);

    }
}