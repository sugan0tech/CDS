#include <stdio.h>
void main(){
    int m1, m2, m3, m4, m5;
    float percentage;
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    if ((m1 > 34)&&(m2 > 34)&&(m3 > 34)&&(m4 > 34)&&(m5 > 34)){
        printf("Pass \n");
        percentage = ((m1 + m2 + m3 + m4 + m5)/500.00)*100;
        printf("%f", percentage);

    }
    else {
        printf("Fail");
    }
    //hloo
    
    
}
