#include <stdio.h>
#include <stdlib.h>

int main() {
    char br111;
    printf("you are my bro??? (:> [Y/n] >>> ");
    scanf(" %c", &br111);

    if (br111 == 'y' || br111 == 'Y') {
        float a = 42.676961;
        float *g = &a;
        printf("float >>> %f\n", a);
        printf("the original value >>> 42.676961\n");
        printf("float address >>> %p\n\n", (void*)&a);
        double b = 42.526769;
        double *u = &b;
        printf("the double >>> %lf\n", b);
        printf("the double value >>> 42.526769\n");
        printf("double address: %p\n", (void*)&b);
        int x = 10;
        int *p = &x;
        printf("now x and &x\n");
        printf("x value = %d\n", *p);
        printf("x address = %p\n", (void*)&x);
        printf("end :>\n");
    } else if (br111 == 'n' || br111 == 'N') {
        printf("NOT BRO OBNARUZHEN\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
