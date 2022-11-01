// Basic Calculator with Addition, Subtraction, Multiplication and Division
#include <stdio.h>
#include <conio.h>
 
int main(){
    system("cls");
    int choice,num1,num2,ans,ret;
    double quo;
    start:
    system("cls");
    printf("-----BASIC CALCULATOR----- \n \n INPUT CHOICE: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n");
    scanf("%d", &choice);  // Choice selection
 
    if(choice==1){     // Addition loop
        system("cls");
        printf("----ADDITION---- \n Enter two numbers: \n");
        scanf("%d%d", &num1,&num2);
        ans=num1+num2;
        printf("SUM = %d", ans);
    }
    else if(choice==2){  // SUbtraction loop
        system("cls");
        printf("----SUBTRACTION---- \n Enter two numbers: \n");
        scanf("%d%d", &num1,&num2);
        ans=num1-num2;
        printf("DIFFERENCE = %d", ans);
    }
    else if(choice==3){  // Multiplication loop
        system("cls");
        printf("----MULTIPLICATION---- \n Enter two numbers: \n");
        scanf("%d%d", &num1,&num2);
        ans=num1*num2;
        printf("PRODUCT = %d", ans);
    }
    else if(choice==4){   // Division loop
        system("cls");
        printf("----DIVISION---- \n Enter two numbers: \n");
        scanf("%d%d", &num1,&num2);
        quo=num1/num2;
        printf("QUOTIENT = %lf", quo);
    }
    else {               // invalid loop
        printf("INVALID SELECTION!");
    }
    printf("\nPress '1' to return to the menu:");  // goto loop
    scanf("%d", &ret);
    if(ret==1){
        goto start;
    } else{
        printf("Terminating Program");
    }
 
}