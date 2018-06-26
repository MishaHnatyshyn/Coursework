#include "MergeSort.h"

void merge(int * arr, int p, int q, int r, int* comparison_ñount) {
	int n1 = q - p + 1;
	int n2 = r - q;

	int * L = new int[n1 + 1];
	int * R = new int[n2 + 1];

	for (int i = 0; i < n1; i++) {
		L[i] = arr[p + i];
	}

	for (int j = 0; j < n2; j++) {
		R[j] = arr[q + j + 1];
	}

	L[n1] = std::numeric_limits<int>::max();
	R[n2] = std::numeric_limits<int>::max();

	int i = 0, j = 0;

	for (int k = p; k < r + 1; k++) {
		*comparison_ñount += 1;
		if (L[i] <= R[j]) {
			
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
	}
	delete[] L;
	delete[] R;
}

void merge_sort(int * arr, int p, int r, int* comparison_ñount) {
	if (p < r) {
		int q = (p + r) / 2;
		merge_sort(arr, p, q, comparison_ñount);
		merge_sort(arr, q + 1, r, comparison_ñount);
		merge(arr, p, q, r, comparison_ñount);
	}
}