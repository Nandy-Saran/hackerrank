#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    if((n%2!=0)||((n%2==0)&&((n>=6)&&(n<=20))))
        printf("Weird");
    if (((n%2==0)&&((n>=2)&&(n<=5)))||((n%2==0)&&(n>20)))
        printf("Not Weird");
    return 0;
}

