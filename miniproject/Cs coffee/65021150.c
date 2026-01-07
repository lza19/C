#include <stdio.h>
#include <string.h>


void menu(){
    printf("1 : green tea 10 Bath \n");
    printf("2 : black tea 11 Bath\n");
    printf("3 : milk tea 13 Bath\n");  
}

void point(){
    int point = 10;
    printf("Your point is %d \n",point);
}

void Login(){
    char realName[20] = "admin";
    char realPass[20] = "1234";

    char username[20];
    char password[20];

    int chreal;

    printf("\n\n\n--- Login --- \n");
    printf("Username : ");
    scanf("%s",username);
    printf("Password : ");
    scanf("%s",password);

    if ( strcmp(username,realName) == 0 && strcmp(password,realPass) == 0 )
    {   
      printf("\n\n\nLogin successful! \n");
      printf("Welcome "" %s "" \n",username);
      printf("1 : show menu \n");
      printf("2 : show point \n");
      printf("3 : logout \n");
      printf("Choose menu : ");
      scanf("%d",&chreal);
    }else{
      printf("Login failed! \n");
    }

    if (chreal == 1)
    {
        menu();
    }
    else if (chreal == 2)
    {
        point();
    }else{
        printf("Logout \n");
    }
    
    
}

void regis(){
    printf("\n\n\n--- Register --- \n");
    char username[20];
    char password[20];
    printf("Username : ");
    scanf("%s",username);
    printf("Password : ");
    scanf("%s",password);
    Login();
}

int main(){

    int x;
    char end;
    do
    {

        printf("\n\n\n--- welcome --- \n");
        printf("\n1 : login \n");
        printf("\n2 : register \n");
        printf("\n#Choose menu : ");
        scanf("%d",&x);

        do
        {
            if(x == 1){
                Login();
            }
            else if(x == 2){
                regis();
            }
            else{
                printf("Please choose again \n");
                printf("Choose menu : ");
                scanf("%d",&x);
            }
        } while (x != 1 && x != 2);
        
        printf("exit : (Y/N): ");
        scanf(" %c", &end);

    } while (end != 'Y' && end != 'y');
    

}