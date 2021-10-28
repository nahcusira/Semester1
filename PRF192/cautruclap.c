#include <stdio.h>
#include <math.h>
int main()
{
	/*2.cho so nguyen duong n nhap tu ban phim ,tinh
	n!=1*3*5*n  khi  n mod 2 khac 0
or n!=2*4*6*n  khi  n mod 2 =0 */
	int n, i, j;
	printf("\nenter n:");
	scanf("\n%d", &n);
	int gt = 1;
	if (n % 2 != 0)
	{
		for (i = 1; i <= n; i += 2)
		{
			gt = gt * i;
		}
		printf("\n gt cua n=%d", gt);
	}
	else
	{
		for (i = 2; i <= n; i += 2)
		{
			gt = gt * i;
		}
		printf("\n gt cua n=%d", gt);
	}

	//3. Trong c�c so tu 1 den 100 c�  bao nhi�u so chia het cho 3. H�y t�nh tong c�c so do.

	int a = 100;
	int tong = 0;
	int count = 0;
	for (i = 1; i <= a; i++)
	{
		if ((i - 3) % 10 == 0)
		{
			count++;
			tong = tong + i;
		}
	}
	printf("\n cac so chia het cho 3 tu 1->100=%d", count);
	printf("\n tong cac so chia het cho 3 tu 1->100=%d", tong);

	//4.star

	printf("\nstar1\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2 * i - 1; j += 2)
			printf("*");
		printf("\n");
	}

	int m;
	printf("\n enter m:");
	scanf("\n%d", &m);
	printf("\n hcn1\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			if (j == 1 || j == m || i == 1 || i == n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		printf("\n\n");
	}

	//7.tinh chinh hop chap k cua n

	int x, y, z;
	int gtn = 1, gtk = 1, hgt = 1;
	//hgt=(n-k)!
	int k;
	printf("\n enter k:");
	scanf("\n%d", &k);
	for (x = 1; x <= n; x++)
		gtn = gtn * x;
	for (y = 1; y <= k; y++)
		gtk = gtk * y;
	for (z = 1; z <= (n - k); z++)
		hgt = hgt * z;
	printf("\nchinh hop chap k cua n=%f", (float)gtn / (gtk * hgt));

	/*8.cho so nguyen duong n nhap tu ban phim
-hien thi cac so nguyen to nho hon n ra man hinh
-hien thi n so nguyen to dau tien ra man hinh */

	//hien thi cac so nguyen to nho hon n ra man hinh

	for (i = 1; i < n; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
			printf("\ncac so nguyen to tu 1->n:%d", i);
	}

	//-hien thi n so nguyen to dau tien ra man hinh

	for (i = 1; i < n; i++)
	{
		count = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
			break;
		printf("\n so nguyen to n dau tien:%d", i);
	}

	//S =1.2.3 + 2.3.4 + 3.4.5 + � + (n - 2)(n - 1)n

	int s = 0;
	for (i = 1; i <= (n - 2); i++)
	{
		s = s + i * (i + 1) * (i + 2);
	}
	printf("\ns=%d", s);

	// s1=1+x/1!-x^2/2!+...+((-1)^n+1)*x^n/n!

	printf("\nenter x:");
	scanf("\n%d", &x);
	int sum = 1;
	float s1 = 0;
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
		s1 = s1 + pow((-1), (i + 1)) * (pow(x, i)) / sum;
	}
	printf("\ns1=%f", (float)s1 + 1);

	//s2

	float s2 = 0;
	for (i = 2; i <= n; i++)
	{
		s2 = s2 + pow((-1), (i + 1)) * (x + i - 1) / i;
	}
	printf("\ns2=%f", s2 + exp(x) + sin(2 * x));

	//s3

	sum = 1;
	float s3 = 0;
	for (i = 1; i <= 2 * n + 1; i += 2)
	{
		for (j = 1; j <= i; j++)
		{
			sum = sum * j;
		}
		s3 = s3 + pow(x, i) / sum;
		sum = 1;
	}
	printf("\ns3=%f", s3 + 1);

	//s4

	sum = 1;
	int t;
	float s4 = 0;
	for (i = 2; i <= 2 * n; i += 2)
	{
		for (j = 1; j <= i; j++)
		{
			sum = sum * j;
		}
		s4 = s4 + pow(-1, i / 2) * (pow(x, i)) / sum;
		sum = 1;
	}
	printf("\ns4=%f", s4 + 1);

	return 0;
}
