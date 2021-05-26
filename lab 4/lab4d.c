#include<stdio.h>
void main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, m = 3, n = 3, i, j, max = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(max < mat[i][j])
            {
                max = mat[i][j];
            }
        }
        printf("\n The biggest number in %d column is %d ", i + 1, max);
    }
}
