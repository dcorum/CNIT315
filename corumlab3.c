#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#ifndef M_PI
# define M_PI acos(-1.0)
#endif

void bubble_sort(int [], int);
void selection_sort(int [], int);
void insertion_sort(int [], int);

int global_array[50000];

int main() {

int i, j, k;
clock_t start, end;
double time_taken;

srand((unsigned int)time(NULL));

for(i=10; i <= 10000; i *= 10){
k=1*i;

for(j=0; j < k; ++j){
global_array[j] = rand();
printf("%d,", global_array[j]);
}

printf("\n");
start = clock();
bubble_sort(global_array, k);
end = clock();
time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
printf("bubble: %.20f",time_taken);
printf("\n");

for(j=0; j<k; ++j){
printf("%d,", global_array[j]);
}

printf("\n\n--\n\n");

k=2*i;

for(j=0; j < k; ++j){
global_array[j] = rand();
printf("%d,", global_array[j]);
}

printf("\n");
start = clock();
bubble_sort(global_array, k);
end = clock();
time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
printf("bubble: %.20f",time_taken);
printf("\n");

for(j=0; j<k; ++j){
printf("%d,", global_array[j]);
}

printf("\n\n--\n\n");

k=3*i;

for(j=0; j < k; ++j){
global_array[j] = rand();
printf("%d,", global_array[j]);
}

printf("\n");
start = clock();
bubble_sort(global_array, k);
end = clock();
time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
printf("bubble: %.20f",time_taken);
printf("\n");

for(j=0; j<k; ++j){
printf("%d,", global_array[j]);
}

printf("\n\n--\n\n");


}

return 0;
}

void bubble_sort(int arr[], int n){
int i, j, tmp;

for(i=0; i < n; i++){
for(j=1;j<(n-1); j++){
if(arr[j-1]>arr[j]){
tmp = arr[j-1];
arr[j-1] = arr[j];
arr[j] = tmp;
}
}
}
}

