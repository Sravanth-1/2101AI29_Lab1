#include<stdio.h>
int main(){
float a,b;
int c;
printf("Enter two numbers which are operands");
scanf("%f%f",&a,&b);
printf("Enter 0 for addition\nEnter 1 for subtraction\n");
printf("Enter 2 for multiplication\nEnter 3 for division\n");
scanf("%d",&c);
if(c==0){
    printf("The addition of the gven two operands is %f",a+b);
}
if(c==1){
    printf("The subtraction of the given two operands is %f",a-b);
}
if(c==2){
    printf("The multiplication of the given two operands is %f",a*b);
}
