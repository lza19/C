#include <stdio.h>
//65021150 wisitpon
int main() {
    //float weight;
    //int height;
    //float price;
    //char grade;

    float weight = 59.5;
    int height = 180;
    float price = 2590;
    char grade = 'B';
    char myName[] = "Wisit";
    float myScore = 26.5;

    // 11.1

    int x1 = 6;
    int x2 = 3;
    int re = x1 + x2;
    printf("Sum of 6+3 : %d\n", re);

    // 11.2
    float weigh = 56.7;
    float heigh = 175;
    float bmi = weigh / ((heigh / 100) * (heigh / 100));
    printf("BMI is : %.2f\n", bmi );


    // 11.3
    float heigh2 = 7;
    float tan = 3;
    float area = 1/2.0 * heigh2 * tan;
    printf("Area is : %.2f\n", area );


  printf("Hello World!");
  return 0;
}