#include <stdio.h>
#include <math.h>
//
int nt(int n)
{
	int i, count = 0;
	for (i = 1; i <= n / 2; i++)
		if (n % i == 0)
			count++;
	return count;
}
//
int cp(int n)
{
	int i, count = 0;
	for (i = 1; i <= n; i++)
		if (i * i == n)
			count++;
	return count;
}
//1
int gtn(int n)
{
	int i, gt = 1, gt1 = 1, gt2 = 1;
	for (i = 1; i <= n; i++)
	{
		gt1 *= i;
		if (i < n)
			gt2 *= i;
	}
	gt = gt1 * gt2;
	printf("\n%d!(%d-1)!= %d", n, n, gt);
}
//2
void max(int a, int b, int c)
{
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("\nMax la: %d", max);
}
//3
int uoc(int n)
{
	int i;
	printf("\nCac uoc cua %d la: ", n);
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("\t%d", i);
}
//4
void ktnt(int n)
{
	if (nt(n) == 1)
		printf("\n%d la so nguyen to", n);
	else
		printf("\n%d khong phai so nguyen to", n);
}
//5.1
int ktnt1(int n)
{
	if (nt(n) == 1)
		printf("\t%d", n);
}
//5.2
void ktcp(int n)
{
	if (cp(n) == 1)
		printf("\t%d", n);
}
//5.3
int UCLN(int a, int b)
{
	int i, max = a;
	if (max < b)
		max = b;
	for (i = max; i > 0; i--)
		if (a % i == 0 && b % i == 0)
		{
			printf("\nuoc chung lon nhat cua %d va %d la %d", a, b, i);
			break;
		}
	return a, b;
}
//5.4
int BCNN(int a, int b)
{
	int i, max = a;
	if (max < b)
		max = b;
	for (i = max;; i++)
		if (i % a == 0 && i % b == 0)
		{
			printf("\nboi chung nho nhat cua %d va %d la %d", a, b, i);
			break;
		}
	return a, b;
}
//5.5
void gt(int n)
{
	int i;
	long long gt = 1;
	for (i = 1; i <= n; i++)
		gt = gt * i;
	printf("\ngt cua %d la: %lld", n, gt);
}
//5.6
void GTNN(int d, int e, int f, int g, int h)
{
	int min = d;
	if (min > e)
		min = e;
	if (min > f)
		min = f;
	if (min > g)
		min = g;
	if (min > h)
		min = h;
	printf("\nMin la: %d", min);
}
//5.7
void GTLN(int d, int e, int f, int g, int h)
{
	int max = d;
	if (max < e)
		max = e;
	if (max < f)
		max = f;
	if (max < g)
		max = g;
	if (max < h)
		max = h;
	printf("\nMax la: %d", max);
}
//5.8
int S()
{
	int o, i, j;
	long long s = 1;
	do
	{
		printf("\nEnter o: ");
		scanf("%d", &o);
		if (cp(o) == 1)
		{
			for (i = 1; i <= 2 * o - 1; i += 2)
			{
				for (j = 1; j <= i; j++)
					s *= j;
			}
			printf("S= %lld", s);
		}
		if (cp(o) != 1)
			printf("\nEnter o la so chinh phuong: ");

	} while (cp(o) != 1);
}
//6.2
void tinhs(int z)
{
	int i, j;
	float s = 1, sum = 0;
	for (i = 1; i <= z; i++)
		if (i % 2 == 0)
		{
			for (j = 1; j <= i; j++)
				s *= j;
		}
	sum += 1 / s;
	printf("S= %.2f", sum);
}
//6.3
void star(int z)
{
	printf("\n");
	int i, j;
	for (i = 1; i <= z; i++)
	{
		for (j = 1; j <= z - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
}
//6.4
void dnt()
{
	int i, dem = 0;
	for (i = 20; i <= 60; i++)
		if (nt(i) == 1)
		{
			dem++;
		}
	printf("\nCo %d so nguyen to trong khoang (20,60)", dem);
}
//6.5
void tcpl(int z)
{
	int i, j, sum = 0, count = 0;
	for (i = 1; i <= z; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
			if (j * j == i)
				count++;
		if (count == 1 && i % 2 != 0)
			sum += i;
	}
	printf("\nTong cac so chinh phuong le nho hon %d= %d", z, sum);
}
//7.1
int nhap()
{
	int x;
	do
	{
		printf("\nEnter x: ");
		scanf("%d", &x);
		if (x <= 0 || x % 2 != 0)
			printf("\nEnter x chan");
	} while (x <= 0 || x % 2 != 0);
	return x;
}
//7.2
void nso(int n)
{
	int i, j, dem = 0;
	printf("\n%d so nguyen to dau tien la: ", n);
	for (i = 1; dem < n; i++)
	{

		int count = 0;
		for (j = 1; j <= i; j++)
			if (i % j == 0)
			{
				count++;
			}
		if (count == 2)
		{
			printf("\t%d", i);
			dem++;
		}
	}
}
//7.3
void cpl(int n)
{
	int i, j, dem = 0, count = 0;
	for (i = 1; i <= n; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
			if (j * j == i)
				count++;
		if (count == 1 && i % 2 != 0)
			dem++;
	}
	printf("\nCo %d so chinh phuong le nho hon %d", dem, n);
}
//7.4
void uocn(int n)
{
	int i, j, tong = 0, count = 0;
	for (i = 1; i <= n; i++)
	{
		count = 0;
		for (j = 1; j <= i / 2; j++)
			if (i % j == 0)
				count++;
		if (count == 1)
			tong += i;
	}
	printf("\nTong cac uoc nguyen to cua %d la: %d", n, tong);
}
//7.5
void bsn(int n)
{
	int i, count = 0;
	for (i = 1; count < n; i++)
		if (count < n)
		{
			if (i % n == 0)
			{
				printf("\t%d", i);
				count++;
			}
		}
}
//7.6
void hiens(int n)
{
	int i, j;
	float sum = 1, S = 2019;
	for (i = 5; i <= 2 * n + 1; i += 2)
		if (i % 2 != 0)
		{
			for (j = 1; j <= i; j++)
				sum *= i;
			S = S + 1 / sum;
		}
	printf("\nS= %f", S);
}
int main()
{
	int n;
	int a, b, c;
	do
	{
		printf("\nEnter n: ");
		scanf("%d", &n);
		if (n <= 0)
			printf("\nEnter n>0");
	} while (n <= 0);
	//1
	gtn(n);
	//2
	printf("\nEnter a: ");
	scanf("%d", &a);
	printf("\nEnter b: ");
	scanf("%d", &b);
	printf("\nEnter c: ");
	scanf("%d", &c);
	max(a, b, c);
	//3
	uoc(n);
	//4
	ktnt(n);
	//5
	int d, e, f, h, g;
	printf("\nEnter d: ");
	scanf("%d", &d);
	printf("\nEnter e: ");
	scanf("%d", &e);
	printf("\nEnter f: ");
	scanf("%d", &f);
	printf("\nEnter g: ");
	scanf("%d", &g);
	printf("\nEnter h: ");
	scanf("%d", &h);
	//5.1
	printf("\nCac so nguyen to la: ");
	ktnt1(d);
	ktnt1(e);
	ktnt1(f);
	ktnt1(g);
	ktnt1(h);
	//5.2
	printf("\nCac so chinh phuong la: ");
	ktcp(d);
	ktcp(e);
	ktcp(f);
	ktcp(g);
	ktcp(h);
	//5.3
	if (nt(d) != 1 && cp(d) != 1)
		gt(d);
	if (nt(e) != 1 && cp(e) != 1)
		gt(e);
	if (nt(f) != 1 && cp(f) != 1)
		gt(f);
	if (nt(g) != 1 && cp(g) != 1)
		gt(g);
	if (nt(h) != 1 && cp(h) != 1)
		gt(h);
	//5.4
	GTNN(d, e, f, g, h);
	GTLN(d, e, f, g, h);
	//5.5
	int o = S();

	UCLN(a, b);
	BCNN(a, b);
	//6.1
	int z;
	do
	{
		printf("\nEnter z: ");
		scanf("%d", &z);
		if (z <= 0 || z >= 10)
			printf("\nEnter 10>z>0: ");
	} while (z <= 0 || z >= 10);
	//6.2
	tinhs(z);
	//6.3
	star(z);
	//6.4
	dnt();
	//6.5
	tcpl(z);
	//7.1
	int x = nhap();
	//7.2
	nso(x);
	//7.3
	cpl(x);
	//7.4
	uocn(x);
	//7.5
	printf("\n%d boi so cua %d la: ", x, x);
	bsn(x);
	//7.6
	hiens(x);
}
