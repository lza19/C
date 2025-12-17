#include <stdio.h>
int main(){
    int pass;
    printf("setting password : ");
    scanf("%d",&pass);
    int x = 0;
    while (x != pass)
    {
        printf("Enter password : ");
        scanf("%d",&x);
        if (x != pass)
        {
            printf("พาสผิด\n");
        }
    }
    printf("ยินดีต้อนรับ\n");
    
    return 0;
}