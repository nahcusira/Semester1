#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int cp(int n)
{
	int i;
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		if (i * i == n)
			count++;
	}
	if (count == 1)
		printf("\nn la so chinh phuong\n");
	else
		printf("\nn khong la so chinh phuong\n");
}

int check(int n)
{
	int i;
	int sum = 0;
	for (i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n)
		return 1;
	return 0;
}

int per(int a, int b)
{
	int i;
	for (i = a; i <= b; i++)
	{
		if (check(i))
			printf("%d ", i);
	}
}

int reverse(int n)
{
	int r, rev = 0;
	while (n > 0)
	{
		r = n % 10;
		rev = rev * 10 + r;
		n /= 10;
	}
	return rev;
}
void lietke(int a, int b)
{
	int i;
	printf("\ncac so la:");
	for (i = a; i <= b; i++)
	{
		if (nt(reverse(i)))
		{
			printf("%5d", i);
		}
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

int main()
{
	int n;
	printf("\nenter n:", n);
	scanf("%d", &n);
	cp(n);
	int a, b;
	printf("\nenter a,b:", a, b);
	scanf("%d%d", &a, &b);
	while (a >= b)
	{
		printf("\nenter a,b:", &a, &b);
		scanf("%d%d", &a, &b);
	}
	per(a, b);
	lietke(a, b);

	return 0;
}
