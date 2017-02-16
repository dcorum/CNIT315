#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#ifndef M_PI
#define M_PI acos(-1.0)
#endif

float factorial(float);
float fibonacci(float);
void hanoi(float,char,char,char);

int main(){

float sel=4;

while(1){

while(sel<0||sel>3){
printf("For factorial enter 1\nFor fibonacci enter 2\nFor hanoi enter 3\nTo exit enter 0\n");
scanf("%f",&sel);
}
if(0==sel){
return 0;
}
if(1==sel)
{
float fac_n=13;
while(fac_n<0||fac_n>12){
printf("Enter the number you would like to use in the factorial function(0-12)\n");
scanf(" %f",&fac_n);
}
printf("\n%f! = %f\n",fac_n,factorial(fac_n));
fac_n=13;
}
if(2==sel){
float fib_m=47;
while(fib_m<0||fib_m>46){
printf("Enter the number you would like to use in the fibonacci function(0-46)\n");
scanf(" %f",&fib_m);
}
printf("\nf_%f = %f\n",fib_m,fibonacci(fib_m));
fib_m=47;
}
if(3==sel){
float han_l=0;
while(han_l<1||han_l>1000){
printf("Enter the number of disks you would like to use in the hanoi function(1-1000)\n");
scanf(" %f",&han_l);
}
hanoi(han_l,'a','c','b');
han_l=0;
}
sel=4;
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
void hanoi(float n,char peg_a,char peg_c,char peg_b)
{
if(1==n){
printf("Move the top disk: peg %c -> peg %c \n", peg_a,peg_c);
}
else{
hanoi(n-1,peg_a,peg_b,peg_c);
printf("Move the top disk: peg %c -> peg %c \n", peg_a,peg_c);
hanoi(n-1,peg_b,peg_c,peg_a);
}
}


