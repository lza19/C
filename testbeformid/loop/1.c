#include <stdio.h>

int main(){
    int x1;
    printf("Enter an integer: ");
    scanf("%d", &x1);
    printf("You entered: %d\n", x1);

    while (x1<2)
    {
        printf("This x = %d\n", x1);
        x1++;

        /* code */
    }
    
    for (x1 =  0; x1 < 5; x1++)
    {
       printf("For Loop x = %d\n", x1);
    }
    



}