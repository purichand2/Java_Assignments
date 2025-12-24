/*Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and
print surface area and volume. (Hint: surface area=2(lb + lh +bh), volume = lbh) */

#include<stdio.h>
int main () {
    int l,b,h;
    scanf("%d%d%d",&l,&b,&h);
    printf("Length is =%d\n Breadth is =%d\n Height is =%d\n ",l,b,h);
    int surface_area = 2*((l*b)+(l*h)+(b*h));
    int volume = l*b*h;
    printf("Surface Area is =%d\n Volume is =%d",surface_area,volume);
    return 0;

}