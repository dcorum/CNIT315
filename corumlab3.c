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

k=5*i;

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

for(i=10; i <= 10000; i *= 10){
k=1*i;

for(j=0; j < k; ++j){
global_array[j] = rand();
printf("%d,", global_array[j]);
}

printf("\n");
start = clock();
selection_sort(global_array, k);
end = clock();
time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
printf("selection: %.20f",time_taken);
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
selection_sort(global_array, k);
end = clock();
time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
printf("selection: %.20f",time_taken);
printf("\n");

for(j=0; j<k; ++j){
printf("%d,", global_array[j]);
}

printf("\n\n--\n\n");

k=5*i;

for(j=0; j < k; ++j){
global_array[j] = rand();
printf("%d,", global_array[j]);
}

printf("\n");
start = clock();
selection_sort(global_array, k);
end = clock();
time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
printf("selection: %.20f",time_taken);
printf("\n");

for(j=0; j<k; ++j){
printf("%d,", global_array[j]);
}

printf("\n\n--\n\n");

}

for(i=10; i <= 10000; i *= 10){
k=1*i;

for(j=0; j < k; ++j){
global_array[j] = rand();
printf("%d,", global_array[j]);
}

printf("\n");
start = clock();
insertion_sort(global_array, k);
end = clock();
time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
printf("insertion: %.20f",time_taken);
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
insertion_sort(global_array, k);
end = clock();
time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
printf("insertion: %.20f",time_taken);
printf("\n");

for(j=0; j<k; ++j){
printf("%d,", global_array[j]);
}

printf("\n\n--\n\n");

k=5*i;

for(j=0; j < k; ++j){
global_array[j] = rand();
printf("%d,", global_array[j]);
}

printf("\n");
start = clock();
insertion_sort(global_array, k);
end = clock();
time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
printf("insertion: %.20f",time_taken);
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

void selection_sort(int arr[], int n)
{
int i, j, min, tmp;

for(i=0;i<n-1;i++)
{
min = i;
for(j=i+1;j<n;j++)
{
if(arr[j]<arr[min]){
tmp = arr[min];
arr[min]=arr[j];
arr[j]=tmp;
}
}
}
}

void insertion_sort(int arr[], int n){
int i, key, j;
for(i=1;i<n;i++)
{
key = arr[i];
j=i-1;
while(j>=0&&arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}
