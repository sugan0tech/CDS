#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, last = 0, first = 0;
        ;
        scanf("%d", &n);
        last = last + n % 10;
        while (n > 0)
        {
            first = n % 10;
            n = n / 10;
        }
        first = first + last;
        printf("%d", first);
    }
    return 0;
}