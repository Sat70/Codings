#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int m, int l, int h)
{
	int i, j, k;
	i = l;
	j = m+1;
	k = l;
    int L[100];
	while (i <=m && j <= h) {
		if (arr[i]<arr[j]) {
			L[k] = arr[i];
			i++;k++;
		}
		else {
			L[k] = arr[j];
			j++;k++;
		}
	}
	while (i <= m) {
		L[k] = arr[i];
		i++;
		k++;
	}
	while (j <=h) {
		L[k] = arr[j];
		j++;
		k++;
	}
    for(int i=l;i<=h;i++)
    {
        arr[i]=L[i];   
         }
}
void mergeSort(int arr[], int l, int h)
{
	if (l < h) {
		int m = (l+h) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, h);
		merge(arr, m,l, h);
	}
}
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	printf("Given array is \n");
	printArray(arr, arr_size);
	mergeSort(arr, 0, arr_size - 1);
	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}
