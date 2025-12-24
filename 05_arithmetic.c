/*Accept two numbers and print arithmetic and harmonic mean of the two
numbers. (Hint: AM=(a+b)/2, HM = ab/(a+b))*/

#include<stdio.h>
int main() {
    float AM,HM;
    float num1,num2;
    printf("Enter the Number =");
    scanf("%f %f",&num1,&num2);
    AM = (num1+num2)/2.0;
    HM = (num1*num2)/(num1+num2);
    printf("Enter Arithmetic Mean =%f\n Harmonic Mean =%f \n ",AM,HM);
    return 0;

}