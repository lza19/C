#include <stdio.h>

int main(){
    int x1;
    printf("Enter an integer: ");
    scanf("%d", &x1);
    printf("You entered: %d\n", x1);

    do
    {
        printf("This x = %d\n", x1);
        x1++;
        /* code */
    } while (x1<5);
    return 0;

}