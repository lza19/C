#include <stdio.h>

int main(){
    int total = 0;
    int score = 0;
    int i;

    for (i = 0; i < 5; i++){
        printf("Enter score %d: ",i+1);
        scanf("%d",&score);
        total = total + score;
    }
    printf("sum score = %d\n",total);
    printf("user = %d\n",i);
    printf("average = %d\n",total/5);
    return 0;
}