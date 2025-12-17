#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int main (){
    char pass[100];
    int length = strlen(pass); 
    int x ;
    int i = 0;
    int count_char ;
    int count_digit ;
    do
    {
        printf("ตั้งรหัสตัวอักษร 6 ตัวขึ้น และจะมีทั้งตัวอักษรและตัวเลข : "); 
        scanf("%s",pass);
        length = strlen(pass); 
        i = 0; 
        count_char = 0;
        count_digit = 0;
        while (pass[i] != '\0') {
        if (isalpha(pass[i])) {
            count_char++;
        }
        i++;
        i = 0; 
        while (pass[i] != '\0') {
        if (isdigit(pass[i])) {
            count_digit++; 
        }
        i++; 
    }
}
    } while (length < 6 || count_char == 0 || count_digit == 0);
    printf("รหัส : %s",pass);
    printf("\nตั้งรหัสสำเร็จ\n");
    return 0; 

}