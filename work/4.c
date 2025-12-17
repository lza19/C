#include <stdio.h>


int main(){
    int total = 0;
    int price = 0;
    int i;
    int allprice[7];
    char date[7][30] = {"จันทรฺ์","อังคาร","พุธ","พฤหัสบดี","ศุกร์","เสาร์","อาทิตย์"};

    for (i = 0; i < 7; i++){
        printf("Enter price วันที่ : %d : ",i+1);
        scanf("%d",&price);
        total = total + price;
        allprice[i] = price;
        //printf("จ่ายวันที่ %d = %d\n",i+1,total);
    }
    printf("\n");
    for (i = 0; i <7; i++){
        printf("จ่ายวันที่ %s = %d\n",date[i],allprice[i]);
    }
    printf("sum price = %d\n",total);
    return 0;
}