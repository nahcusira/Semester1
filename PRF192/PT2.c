#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void inputarray(float a[], int n, char str[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\n%s[%d]=", str, i);
		scanf("%f", &a[i]);
	}
}
int nt(int n)
{
	int i;
	if (n < 2)
		return 0;
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int max(float a[], int n)
{
	int maxValue = a[0];
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] > maxValue)
		{
			maxValue = a[i];
		}
	}
	return maxValue;
}
void GetMaxPosition(float a[], int n)
{
	int maxValue = max(a, n);
	printf("\nVi tri cua phan tu lon nhat: ");
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == maxValue)
		{
			printf("%d ", i + 1);
		}
	}
}

int main()
{
	int n;
	float a[100];
	printf("\nenter n:");
	scanf("%d", &n);
	inputarray(a, n, "a");
	int i = 0;
	float sum;
	for (i = 0; i < n; i++)
	{
		if (nt(i) == 1)
		{
			sum += a[i];
		}
	}
	printf("\ntong phan tu co chi so la so nguyen to la:%f", (float)sum);
	GetMaxPosition(a, n);

	fflush(stdin); //xoa bo nho dem
	char b[100];
	printf("\nenter b:");
	gets(b);

	return 0;
}
