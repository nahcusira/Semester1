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
	printf("\nmang so nguyen vua nhap:");
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void showarraychan(int a[], int n)
{
	printf("\ncac phan tu chan trong mang:");
	int i;
	for (i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			printf("%d ", a[i]);
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
int cp(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		if (i * i == n)
			return 1;
	}
	return 0;
}
int main()
{
	//khai bao mang so nguyen gom toi da 100 phan tu
	int a[100];
	int b[50];
	//nhap n phan tu cho mang so nguyen
	int n; //so luong phan tu thuc te cua mang
	printf("\nenter n:");
	scanf("%d", &n);
	inputarray(a, n, "a");
	/*	inputarray(b,2,"b");           */

	//hien mang vua nhap
	showarray(a, n);
	//hien cac phan tu thoa man dieu kien nao do
	//hien cac phan tu chan trong mang
	showarraychan(a, n);
	//hien cac phan tu khong tan cung la so 7 trong mang
	printf("\ncac phan tu khong co tan cung la 7:");
	int i;
	for (i = 0; i < n; i++)
		if ((a[i] - 7) % 10 != 0)
			printf("%d ", a[i]);

	//co bao nhieu phan tu la so chinh phuong trong mang
	int count = 0;
	for (i = 0; i < n; i++)
		if (cp(a[i]))
			count++;
	printf("\nco %d so chinh phuong trong mang a", count);
	//tong cac phan tu la so nguyen to trong mang
	int sum = 0;
	for (i = 0; i < n; i++)
		if (nt(a[i]))
			sum += a[i];
	printf("\ntong cac phan tu la so nguyen to trong mang la:%d", sum);

	//tinh trung binh cac phan tu khong la chinh phuong le trong mang
	int count2 = 0;
	for (i = 0; i < n; i++)
		if (!(cp(a[i]) == 1 && a[i] % 2 != 0))
			count2++;
	int sum2 = 0;
	for (i = 0; i < n; i++)
		if (!(cp(a[i]) == 1 && a[i] % 2 != 0))
			sum2 += a[i];
	if (count2 != 0)
		printf("\ntrung binh cac phan tu khong la chinh phuong le trong mang a la:%f", (float)sum2 / count2);
	else
		printf("\nkhong co so thoa man");

	return 0;
}
