#include<stdio.h>
struct student_mark
{
    char name[10];
    int marks[5];
};
void main()
{
    int i, n, j, count;
    float res, temp;
    printf("Enter no of students :");
    scanf("%d", &n);
    struct student_mark student[n];
    for (i = 0; i < n; i++ )
    {
        printf("Enter the student%d name :", i + 1);
        scanf("%s", student[i].name);
        for (j = 0; j < 5; j++)
        {
            printf("Enter %s subject%d mark:", student[i].name, j + 1);
            scanf("%d", &student[i].marks[j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < 5; j++)
        {
            if (student[i].marks[j] < 40)
            {
                count = 1;
            }
        }
        if (count == 1)
        {
            temp += 1;
        }
    }
    res = ((n - temp)/n)*(100.0) ;
    printf("\nThe pass percentage is %.2f", res);
    // 20EUCS147

}