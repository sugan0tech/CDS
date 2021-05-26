#include<stdio.h>
int main() {
    int num, result, remainder;
    scanf("%d", &num);
    result = 0;
    while (num != 0) {
        remainder = num % 10;
        result = result * 10 + remainder;
        num /= 10;
        printf("%d %d %d \n " , num , remainder, result);
    }
    printf("%d", result);
}