#include <stdio.h>
int main() {
    int a , res,i, temp;
    scanf("%d", &a);
    res = 0;
    for (i = 1;i < a;++i) {
        if ( a%i == 0) {
            res = res + i;
        }
    }
    if (res == a) {
        printf("The given number is a perfect number");
    }
    
}