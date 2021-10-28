#include <stdio.h>
int inputarray(int a[], int n, char str[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\n%s[%d]=", str, i); // hien thi
		scanf("%d", &a[i]);
	}
}
void showarray(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int a[100];
	int n;
	printf("\nenter n:");
	scanf("%d", &n);
	inputarray(a, n, "a");
	printf("\nmang so nguyen vua nhap:");
	showarray(a, n);

	//tim max cac phan tu trong mang
	//gan gia tri ban dau cho max
	int max = a[0];
	//kiem tra lai gia tri max trong mang
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	printf("\nmax=%d", max);

	//tim min trong cac phan tu chan trong mang
	int min, check = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			check = 1;
			min = a[i];
			break;
		}
	}
	if (check == 1)
	{
		for (i = 0; i < n; i++)

			if (a[i] < min && a[i] % 2 == 0)
			{

				min = a[i];
			}
		printf("\nmin chan=%d", min);
	}
	else
		printf("\nkhong co phan tu chan trong mang");

	//sap xep mang tang dan
	for (i = 0; i <= n - 2; i++)
	{
		int j;
		for (j = i + 1; j <= n - 1; j++)
		{
			int tg;
			if (a[i] > a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	printf("\nmang sau khi sap xep tang dan:");
	showarray(a, n);
	//sap xep giam dan
	for (i = 0; i <= n - 2; i++)
	{
		int j;
		for (j = i + 1; j <= n - 1; j++)
		{
			int tg;
			if (a[i] < a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	printf("\nmang sau khi sap xep giam dan:");
	showarray(a, n);

	//sap xep giam nhung phan tu chan trong mang
	for (i = 0; i <= n - 2; i++)
	{
		int j;
		for (j = i + 1; j <= n - 1; j++)
		{
			int tg;
			if (a[i] < a[j] && a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	printf("\nmang sau khi sap xep giam dan phan tu chan:");
	showarray(a, n);

	return 0;
}
