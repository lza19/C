#include <stdio.h>
#include <stdio.h>

int main(){

    int i ;

    for (i = 1; i <= 5; i++) //(การกำหนดค่าเริ่มต้น; เงื่อนไขการวนซ้ำ; การเปลี่ยนแปลงค่า)
    {
        printf("\n%d",i);

    }


    while (i < 10) //เงื่อนไขการวนซ้ำ
    {
        printf("\n%d",i);
        i++;
    }
    

    do
    {
        printf("\n%d",i);
        i++;
    } while (i < 15);
    return 0;


}