/*Accept radius of a circle and print the area and circumference of circle. (Hint:
area = πr2, circumference = 2πr)*/

#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
