#include <stdio.h>

int main(){
    int traegt;
    printf("Enter a number traegt: ");
    scanf("%d",&traegt);
    int x;

       while (x != traegt)
       {
        printf("Guess the number: ");
        scanf("%d",&x);
        if (x > traegt)
        {
            printf("high\n ");
        } else if (x < traegt)
        {
            printf("low\n ");
        }
    }
    printf("Congratulations %d\n",traegt);
    return 0;
}