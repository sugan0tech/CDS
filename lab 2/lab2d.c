#include <stdio.h>
int main() {
    char x;
    scanf("%c", &x );
    if (65 <= x && x <= 122)
    {
        printf("alphabet");
    }
    else if (48 <= x && x <= 57)
    {
        printf("number");
    }
    else 
    {
        printf("special char");
    }
}