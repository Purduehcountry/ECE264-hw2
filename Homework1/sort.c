/* MODIFY this file */

#include "sort.h"

void ssort(int * arr, int size) {
	/* For step 3, fill this in to perform a selection sort
	   For step 4, add conditional compilation flags to perform an ascending selection sort instead */
	if (size <= 1) {
		return;
	}

	for (int i = 0; i < size - 1; i++) {
		int best = i;
		for (int j = i + 1; j < size; j++) {
#ifdef ASCENDING
			if (arr[j] < arr[best]) {
				best = j;
			}
#else
			if (arr[j] > arr[best]) {
				best = j;
			}
#endif
		}
		if (best != i) {
			int tmp = arr[i];
			arr[i] = arr[best];
			arr[best] = tmp;
		}
	}
}
