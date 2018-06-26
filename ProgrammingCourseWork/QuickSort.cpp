#include "QuickSort.h"

int partition(int * arr, int p, int r, int* comparison_ñount) {
	int pivot = arr[r-1];
	int i = p - 1;

	for (int j = p; j < r - 1; j++) {
		*comparison_ñount += 1;
		if (arr[j] <= pivot) {
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	int temp = arr[i + 1];
	arr[i + 1] = arr[r - 1];
	arr[r - 1] = temp;
	return i + 1;
}

void quick_sort(int * arr, int p, int r, int* comparison_ñount) {
	if (p < r) {
		int q = partition(arr, p, r, comparison_ñount);
		quick_sort(arr, p, q, comparison_ñount);
		quick_sort(arr, q + 1, r, comparison_ñount);
	}
}
