#include<stdio.h>
int main(){
    /// Salary with Bonus
    char name;
    double salary,p;
    scanf("%s", &name);
    scanf("%lf %lf", &salary,&p);
    double pp = p*.15;
    double t = salary+pp;
    printf("TOTAL = R$ %.2f\n", t);

    return 0;
}
