#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int tip_percent,tax_percent;
    float tip,tax;
    double mealcost,totalCost1;
        int totalCost;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%lf",&mealcost);
    scanf("%d",&tip_percent);
    scanf("%d",&tax_percent);
    tip=(mealcost*tip_percent)/100;
    tax=(mealcost*tax_percent)/100;
    totalCost1=mealcost+tip+tax;
    totalCost=(int)round(totalCost1);
    printf("The total meal cost is %d dollars.",totalCost);
    return 0;
}

