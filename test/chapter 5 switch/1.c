#include <stdio.h>
int main(){
    int a = 10;

    switch (a){
        case 1:
            printf("a เท่ากับ 5");
            break;
        case 3:
            printf("a เท่ากับ 10");
            break;
        case 15:
            printf("a เท่ากับ 15");
            break;
        default:
            printf("a ไม่เท่ากับ 5,10,15");
            break;
    }

    return 0;

}
