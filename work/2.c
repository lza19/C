#include <stdio.h>

int main(){
    int a;
    printf("สูตรคูณแม่ :");
    scanf("%d",&a);
    for (int i = 1; i <= 12; i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
    return 0;
}
