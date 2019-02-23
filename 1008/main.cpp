#include <cstdio>
#include <string.h>
#include <stdlib.h>

void swap(int * arr, int i, int j)
{
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int reverse(int *arr, int start, int end) {
	
	for (int i = start, j = end; i < j; ++i, --j)
	{
		swap(arr, i, j);
	}
}

int main()
{
	int n = -1;
	int m = -1;
	int *num = NULL;
	
	scanf("%d%d", &n, &m);
	num = (int *)malloc(n * sizeof(int));
	bzero(num, n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	m = m % n;
	if (0 == m || 1 == n)
		goto res;
	reverse(num, 0, n - 1);
	reverse(num, 0, m - 1);
	reverse(num, m, n - 1);
	res:
	for (int i = 0; i < n - 1; i++)
	{
		printf("%d ", num[i]);
	}
	printf("%d\n", num[n - 1]);
	scanf("%d", &n);
    return 0;
}