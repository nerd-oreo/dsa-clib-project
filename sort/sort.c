#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

void merge_sort(int a[], size_t size) {
	int mid = size/2;
	int left[mid], right[size-mid];

	if(size < 2)
		return;

	/* Divide a[] into two arrays left[] and right[] */
	for(int i = 0; i < mid; i++) 
		left[i] = a[i];

	for(int j = mid; j < size; j++)
		right[j-mid] = a[j];	// j-mid will reset the counter back to 0

	/* Continue dividing left[] and right[] using recursion */
	printf("Dividing...\n");
	merge_sort(left, mid);
	merge_sort(right, size-mid);

	/* Merging process */
	printf("Merging...\n");
	int nL = mid, nR = size-mid, i, j, k;	// nL and nR are just the size of left[] and right[]
	i = j = k = 0; // variable i, j, and k are used for indexing left[], right[], and a[]

	while(i < nL && j < nR) {
		if(left[i] <= right[j]) {
			a[k] = left[i]; i++;
		}
		else {
			a[k] = right[j]; j++;
		}
		k++;
	}

	/* These two while loops are for adding leftover elements from left[] and right[] into a[] */
	/* NOTE: only one of two while loop  will be executed */
	while(i < nL) {
		a[k] = left[i]; i++; k++;
	}

	while(j < nR) {
		a[k] = right[j]; j++; k++;
	}
}