#include <stdio.h>

int main(){
    int a = 10,p = 20;
    float b = 20.5362626;
    char c = 'A';
    int area = a + p;

    printf("Hello, World! : %d", area);
    printf("\nHello, World! %d%f%c",a,b,c);
    printf("\n%d",a+p);
    printf("\n%.2f",b);



    if (a > p)
    {
       printf("\na มากกว่า p");
    } else if (a == p)
    {
        printf("\na เท่ากับ p");
    } else  
    {
        printf("\na น้อยกว่า p");
    }

     return 0;
    
}