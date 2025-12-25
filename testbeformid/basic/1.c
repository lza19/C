#include <stdio.h>  

int main(){
    int x1 = 10;
    float x2 = 20.5;
    char x3 = 'A';
    char x4[] = "Test String";

    printf("Hello, World!\n");
    printf("x1 = %d %d\n", x1,x1);
    printf("x2 = %.2f\n", x2);
    printf("x3 = %c\n", x3);
    printf("x4 = %s\n", x4);

    return 0;
}