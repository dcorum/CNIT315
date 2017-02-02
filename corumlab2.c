#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#ifndef M_PI
#define M_PI acos(-1.0)
#endif

float factorial(float);
float fibonacci(float);
void hanoi(int,char,char,char);

int main(){

float sel;

while(1){
printf("For factorial enter 1, for fibonacci enter 2 for hanoi enter 3...to exit enter 0\n");
scanf(" %f",&sel);
if(0==sel){
return 0;
}
if(1==sel)
{
float fac_n;

printf("Enter the number you would like to use in the factorial function\n");
scanf(" %f",&fac_n);
printf("\n%f = %f\n",fac_n,factorial(fac_n));

}
if(2==sel){
float fib_m;
printf("Enter the number you would like to use in the fibonacci function\n");
scanf(" %f",&fib_m);
printf("\n%f = %f\n",fib_m,fibonacci(fib_m));
}
if(3==sel){
float han_l;

}
}

}
float factorial(float n){
if(1 >= n){
return 1;
}
else{
return n * factorial(n-1);
}
}
float fibonacci(float n){
if(0>=n){
return 0;
}
else if(1==n){
return 1;
}
else{
return (fibonacci(n-1)+fibonacci(n-2));
}
}
void hanoi(float n,char peg_a,char peg_b,char peg_c)
{
if(1==n){
printf("Move the top disk: peg %c -> peg %c \n", peg_a,peg_c);
else{

}
}
}

