#include <stdio.h>

int main(){
    int x1;
    printf("Enter an integer: ");
    scanf("%d", &x1);
    printf("You entered: %d\n", x1);
    if (x1<1)
    { x1=x1+1;
        /* code */
    }else
    {
        x1=x1-1;
    }

    printf("Final value of x1: %d\n", x1);
    return 0;
}