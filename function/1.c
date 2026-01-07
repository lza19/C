#include <stdio.h>
void area(){
    int base = 5;
    int height = 10;
    int area = base * height;
    printf("Area: %d\n", area);
}

void O(float r){
    float area = 3.14 * r * r;
    printf("area : %.2f\n", area);
}

float OO(float r){
    return 3.14 * r * r;
}

char gread(float x){
    if(x >= 80){return 'A';}
    else{return 'F';}

}

int main() {
    printf("Hello, World!\n");
    area();
    O(5.0);
    float resultOO = OO(7.0);

    char grade = gread(85.0);
    printf("%c\n",grade);

}