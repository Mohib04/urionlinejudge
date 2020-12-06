#include<stdio.h>
int main(){
    ///Salary
    int number;
    scanf("%d", &number);
    double SALARY, h, ps;
    scanf("%lf %lf", &h,&ps);
    SALARY = h*ps;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}
