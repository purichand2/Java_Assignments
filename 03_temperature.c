/*Accept temperatures in Fahrenheit(F) and print it in Celsius(C) and Kelvin (K).
(Hint: C=5/9(F- 32), K = C + 273.15) */

#include<stdio.h>
int main() {
    float celcius;
    float kelvin;
    float fahrenheit;
    printf("Enter the temperature =");
    scanf("%f",&fahrenheit);
    celcius = (5.0/9.0)*(fahrenheit-32);
    kelvin = celcius+273.15;
    printf("Celsius is =%f\n", celcius);
    printf("Kelvin is =%f\n", kelvin);

    return 0;

}