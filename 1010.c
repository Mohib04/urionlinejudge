#include<stdio.h>
int main(){
    ///Simple Calculate
    int product_code1,quantity1;
    int product_code2,quantity2;
    float total,amount1,amount2,unit_price1,unit_price2;
    scanf("%d %d %f", &product_code1,&quantity1,&unit_price1);
    scanf("%d %d %f", &product_code2,&quantity2,&unit_price2);
    amount1 = quantity1*unit_price1;
    amount2 = quantity2*unit_price2;
    total = amount1+amount2;
    printf("VALOR A PAGAR: R$ %.2f\n",total);
}
