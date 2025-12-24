/* Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity
(v) and the distance (s) travelled. (Hint: v = u + at, s = u + at2)*/

#include<stdio.h>
int main(){
    int u,a,t,v,s;
    printf("Enter U = ");
    scanf("%d",&u);
    printf("Enter A =");
    scanf("%d",&a);
    printf("Enter T =");
    scanf("%d",&t);
    v = u + (a * t);
    s = u + (a * t * 2);
    printf("Final Velocity =%d and Distance =%d",v,s);
    return 0; 
}