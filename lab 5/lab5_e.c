#include <stdio.h>
void swp(int*, int*);
int main()
{
   int x, y;
   printf("Enter the value of x and y\n");
   scanf("%d %d",&x,&y);
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
   swp(&x, &y); 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
   return 0;
}
void swp(int *a, int *b)
{
   int temp;
   temp = *b;
   *b = *a;
   *a = temp;   
}