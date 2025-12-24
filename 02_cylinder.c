/*Accept dimensions of a cylinder and print the surface area and volume. (Hint:
surface area = 2 πr2+ 2πrh, volume = πr2h) */

#include<stdio.h>
int main() {
    float r,h,surface_area,volume;
    const float pi=3.14;
    printf("Enter the radius =");
    scanf("%f",&r);
    printf("Enter the height =");
    scanf("%f",&h);
    surface_area = 2*pi*r*r;
    volume = pi*r*r*h;
    printf("Surface area of cylinder is = %.2f\n",surface_area);
    printf("Volume of cylinder is = %.2f\n",volume);
    return 0;

}