#include <stdio.h>

int main (){

    int num ;
    printf("ป้อนตัวเเลข: ");
    scanf("%d", &num);
    printf("เลข: %d\n", num);

    //1 ทาง

    if (num > 0)
    { 
        printf("มากกว่า 0 \n");
        
    }

    //2 ทาง 
    if (num == 0)
    {
     printf("เท่ากับ 0 \n");   /* code */
    } else {
        printf("ไม่เท่ากับ 0 \n");
    }

    //3 ทาง
    if (num < 0)
    {
        printf("น้อยกว่า 0  \n");
    }else if (num == 0)
    {
        printf("ไม่ใช่ 0 หรือเท่ากับ 0 \n");
    }else
    {
        printf("ไม่ใช่ 0 \n");

    }
    

    printf("Hello, World!");
    return 0;
}