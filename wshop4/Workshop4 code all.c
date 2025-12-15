#include <stdio.h>

//65021150 wisitpon
int main() {   
    printf("Hello World!");

    //1.1
    int x1 = 7;
    int x2 = 9;

    //1.2
    int dif1 = x1 - x2;
    //1.3
    int dif2 = x1 + x2;

    //1.4
    printf("dif : %d\n", dif1);
    printf("sum : %d\n", dif2);

    //2 สามเหลี่ยม
    float h = 12;
    float w = 5;
    float area = 0.5 * h * w;
    printf("Area : %.2f\n", area);

    //3 วงกลม
    float r = 9;
    float pi = 3.14;
    float area2 = pi * r * r;
    printf("Areacircle : %.2f\n", area2);

    //4 องศา
    float celsius = 11;
    float fahrenheit = (celsius * 9/5) + 32;
    printf("Fahrenheit : %.2f\n", fahrenheit);
    
    //5
    float distance = 19.4;
    float time = 23;
    float speed = distance / time;
    printf("Speed : %.2f\n", speed);


    return 0; 
}
