#include<stdio.h>
int main(){
    double num1,num2;
    char op;
    printf("Enter the first number: ");
    scanf("%lf",&num1);
    printf("Enter operator: ");
    scanf(" %c",&op);
    printf("Enter the first number: ");
    scanf("%lf",&num2);

    switch(op){
        case '+':printf("Result is %0.2f",num1+num2);break;
        case '-':printf("Result is %0.2f",num1-num2);break;
        case '*':printf("Result is %0.2f",num1*num2);break;
        case '/':
                 if(num2!=0){
                    printf("Result is %0.2f",num1/num2);
                 }else{
                    printf("math error!");
                 }
                    break;
                    default:
                    printf("Invalid operator!");
    }
    return 0;
}