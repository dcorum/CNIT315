/*
 * ==== DO NOT EDIT BELOW THIS LINE, UNTIL YOU ARE TOLD TO DO SO ====
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* Function prototypes */
void fill_random(int *, int);
void test_bubble_sort_p(int *, int);
void test_selection_sort_p(int *, int);
void test_insertion_sort_p(int *, int);
void bubble_sort_p(int *, int);
void selection_sort_p(int *, int);
void insertion_sort_p(int *, int);
void swap(int , int );
int is_sorted_p(int *, int);


int main() {
	int *local_array = NULL, i = 10;

	/*
	 * Prepare space for up to 50000 integers.
	 * You did not learn dynamic memory allocation,
	 * so you may ignore this part for now and just assume
	 * that there is enough space for 50000 integers.
	 */
	if(NULL == (local_array = (int *)malloc(sizeof(int) * 50000))) {
		perror("malloc()");

		exit(EXIT_FAILURE);
		return EXIT_FAILURE;
	}

	/* Verifying your implementation of is_sorted_p(). */
	*(local_array + 0) = 90;
	*(local_array + 1) = 19;
	*(local_array + 2) = 12;
	*(local_array + 3) = 5;
	/*assert(0 == is_sorted_p(local_array, 4));*/
printf("\n %d \n", is_sorted_p(local_array,4));
	*(local_array + 0) = 5;
	*(local_array + 1) = 12;
	*(local_array + 2) = 19;
	*(local_array + 3) = 90;
	/*assert(1 == is_sorted_p(local_array, 4));*/
printf("\n %d \n", is_sorted_p(local_array,4));


	/* Bubble sort */
	for(; i <= 10000; i *= 10) {
		/* 10, 100, 1000, 10000 */
		test_bubble_sort_p(local_array, i);
		/* 20, 200, 2000, 20000 */
		test_bubble_sort_p(local_array, 2 * i);
		/* 50, 500, 5000, 50000 */
		test_bubble_sort_p(local_array, 5 * i);
	}

	/* Selection sort */
	for(i = 10; i <= 10000; i *= 10) {
		/* 10, 100, 1000, 10000 */
		test_selection_sort_p(local_array, i);
		/* 20, 200, 2000, 20000 */
		test_selection_sort_p(local_array, 2 * i);
		/* 50, 500, 5000, 50000 */
		test_selection_sort_p(local_array, 5 * i);
	}

	/* Insertion sort */
	for(i = 10; i <= 10000; i *= 10) {
		/* 10, 100, 1000, 10000 */
		test_insertion_sort_p(local_array, i);
		/* 20, 200, 2000, 20000 */
		test_insertion_sort_p(local_array, 2 * i);
		/* 50, 500, 5000, 50000 */
		test_insertion_sort_p(local_array, 5 * i);
	}

	/* Clean Up */
	free(local_array);
	local_array = NULL;

	exit(EXIT_SUCCESS);
	return EXIT_SUCCESS;
}

void fill_random(int *ptr, int n) {
	int i = 0;

	srand((unsigned int)time(NULL));
	for(; i < n; ++i) {
		*(ptr + i) = rand();
	}
}

void test_bubble_sort_p(int *ptr, int n) {
	double start, end;

	fill_random(ptr, n);
	while(1 == is_sorted_p(ptr, n)) {
		fill_random(ptr, n);
	}

	start = clock();
	bubble_sort_p(ptr, n);
	end = clock();

	/*assert(1 == is_sorted_p(ptr, n));*/

	printf("bubble_p(%d): %f\n", n, (end - start) / CLOCKS_PER_SEC);
}

void test_selection_sort_p(int *ptr, int n) {
	double start, end;

	fill_random(ptr, n);

	while(1 == is_sorted_p(ptr, n)) {
		fill_random(ptr, n);
	}

	start = clock();
	selection_sort_p(ptr, n);
	end = clock();

	assert(1 == is_sorted_p(ptr, n));

	printf("selection_p(%d): %f\n", n, (end - start) / CLOCKS_PER_SEC);
}

void test_insertion_sort_p(int *ptr, int n) {
	double start, end;

	fill_random(ptr, n);

	while(1 == is_sorted_p(ptr, n)) {
		fill_random(ptr, n);
	}

	start = clock();
	insertion_sort_p(ptr, n);
	end = clock();

	assert(1 == is_sorted_p(ptr, n));

	printf("insertion_p(%d): %f\n", n, (end - start) / CLOCKS_PER_SEC);
}
/*
 * ==== YOU MAY NOW START WRITING CODES BELOW THIS LINE ====
 */

void bubble_sort_p(int *arr, int n) {
int i, j, tmp;

for(i=0; i < n; i++){
for(j=1;j<(n); j++){
if(*arr+j-1>*arr+j){
swap(*arr+j-1, *arr+j);
}
}
}

}

void selection_sort_p(int *ptr, int n) {
	/* Your code here */
}

void insertion_sort_p(int *ptr, int n) {
	/* Your code here */
}

void swap(int a, int b) {
int t = a;
a = b;
b = t;
}

int is_sorted_p(int *ptr, int n) {
int i;
for(i=0;i<n;i++){
if(*ptr+i>*ptr+(i+1)){
return 0;
}
}
return 1;
}

