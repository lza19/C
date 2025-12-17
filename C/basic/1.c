#include <stdio.h>

int main (){
    int i;
    char a = 'A';
    char c[] = "sdsd";
    char ca[] = "sdssssd";
    i = 0;
    printf("hello %s : %d : %c : %s",c ,i,a,ca);

    printf("\n\n");
    int z = 5;
    printf("decimal\n");
    printf("Counting to %d:\n",z);

    printf("float\n");
    float f = 5.5678;
    printf("Value of f: %.2f\n",f); //as

    return 0;
}