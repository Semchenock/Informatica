#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, m, i, j;
	printf("Enter n:");
	scanf("%d", &n);
	int* arr1 = (float*)malloc(n * sizeof(int));
	printf("Enter m:");
	scanf("%d", &m);
	int* arr2 = (float*)malloc(m * sizeof(int));
	printf("Enter array A:\n");
	for (i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	printf("Enter array B:\n");
	for (i = 0; i < m; i++)
		scanf("%d", &arr2[i]);
	int* arr3 = (float*)malloc((n+m) * sizeof(int));
	if (n >= m)
	{
		for (i = 0; i < m; i++)
		{
			arr3[i * 2] = arr1[i];
			arr3[i * 2 + 1] = arr2[i];
		}
		for (j = 0; j < (n - m); j++)
			arr3[i * 2 + j] = arr1[m + j];
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			arr3[i * 2] = arr1[i];
			arr3[i * 2 + 1] = arr2[i];
		}
		for (j = 0; j < (m - n); j++)
			arr3[i * 2 + j] = arr2[n + j];
	}
	printf("C:");
	for (i = 0; i < (n + m); i++)
		printf(" %d", arr3[i]);
}