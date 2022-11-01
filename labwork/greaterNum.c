#include<stdio.h>
#include<math.h>
 
int main(){
    system("cls");
float a,b,c;
printf("Enter a: ");
scanf("%f",&a);
printf("Enter b: ");
scanf("%f",&b);
printf("Enter c: ");
scanf("%f",&c);
 
if(a>b && a>c){
printf("The greatest number is %f: ",a);
}
else if (b>c && b>a){
printf("The greatest number is %f: ",b);
}
else{
printf("The greatest number is %f: ",c);
}
return 0;
}