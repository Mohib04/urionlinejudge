#include<stdio.h>
int main(){
    ///Sphere
    double r;
    double pi=3.14159;
    scanf("%lf", &r);
    double VOLUME = (4/3.0)*pi*r*r*r;
    printf("VOLUME =  %.3f \n", VOLUME);
}
