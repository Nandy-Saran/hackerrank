#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
int i=4;
double d=4.0;
char s[]="HackerRank ";
 // Declare second integer, double, and String variables.
    int j;int k=0,q=0;
    double d2;
    char *input=malloc(1000*sizeof(char));

    // Read and save an integer, double, and String to your variables.
scanf("%d",&j); 
scanf("%lf",&d2);
scanf(" %[^\n]s",input); 
    // Print the sum of both integer variables on a new line.
    printf("%d",j+i);
   
    // Print the sum of the double variables on a new line.
   printf("\n%.1lf",d2+d); 
    // Concatenate and print the String variables on a new line

printf("\n%s%s",s,input);



return 0;
}
 


