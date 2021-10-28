#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void swap1(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void swap2(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void ucln(int a, int b)
{
	int hcf, i;
	for (i = 1; i <= a || i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
			hcf = i;
	}
}

int main()
{
	int *a, i, n;
	scanf("%d", &n);
	a = (int *)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", (a + i)); //or a[i]
	}
	printf("\nphan tu chan:");
	for (i = 0; i < n; i++)
	{
		if (*(a + i) % 2 == 0)
			printf("%d ", *(a + i)); //or a[i]
	}
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (*(a + i) % 3 != 0)
			count++;
	}
	printf("\nkhong chia het cho 3:%d", count);

	return 0;
}
