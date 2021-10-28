#include <stdio.h>
#include <math.h>
int main()
{
	int i, n;
	printf("\nenter n:");
	scanf("%d", &n);
	printf("\ncac so tu 1->n:");
	for (i = 1; i <= n; i++)
		printf("%d ", i);

	//1.hien cac so thoa man dieu kien nao do?

	//hien cac so chan tu 1->n
	printf("\ncac so chan tu 1->n:");
	for (i = 1; i <= n; i++)
		if (i % 2 == 0)
			printf("%d ", i);

	//hien cac so chia het cho 2 nhung k chia het cho 3
	printf("\ncac so chia het cho 2 khong chia het cho 3:");
	for (i = 1; i <= n; i++)
		if (i % 2 == 0 && i % 3 != 0)
			printf("%d ", i);

	//2.dem cac so phan tu thoa man dieu kien nao do

	//co bao nhieu phan tu khong chia het cho 5 tu 1->n
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 5 != 0)
		{
			count++;
		}
	}
	printf("\nso phan tu khong chia het cho 5:%d", count);

	//co bao nhieu phan tu tan cung la so 3 tu 1->n
	//co bao nhieu phan tu le thuoc (20,50]

	//tan cung la so 3
	int dem = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 10 == 3)
		{
			dem++;
		}
	}
	printf("\nso phan tu tan cung la so 3 tu 1->n:%d", dem);

	//phan tu le (20,51]
	int le = 0;
	for (i = 21; i <= 51; i++)
	{
		if (i % 2 != 0)
		{
			le++;
		}
	}
	printf("\nso phan tu le (20,51]:%d", le);

	//co bao nhieu phan tu khong tan cung 3 khong thuoc (10,30)tu 1->n
	//co bao nhieu phan tu khong thuoc (5,15) va [30,40) tu 1->n

	//khong tan cung 3 va khong thuoc (10,30)
	count = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 10 != 3 && i < 10 || i > 30)
		{
			count++;
		}
	}
	printf("\ntu 1->n khong tan cung la 3 va khong thuoc (10,30):%d", count);

	//khong thuoc (5,15) va [30,40) tu 1->n
	count = 0;
	for (i = 1; i <= n; i++)
	{
		if (i < 5 || i > 15 && i <= 30 || i > 40)
		{
			count++;
		}
	}
	printf("\ntu 1->n khong thuoc (5,15) va [30,40):%d", count);

	//tinh tong cac so thoa man dieu kien nao do?

	//tong cac phan tu khong tan cung la so 3 tu 1->n
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 10 != 3)
			sum = sum + i;
	}
	printf("\ntong cac so khong tan cung la 3:%d", sum);

	//ap dung phan hien, dem va tinh tong de lam 1 so bai nhu sau:

	//kiem tra xem n co phai so nguyen to?
	count = 0;
	for (i = 1; i <= n / 2; i++)
		if (n % i == 0)
			count++;
	if (count == 1)
		printf("\nn la so nguyen to");
	else
		printf("\nn khong la so nguyen to");

	//cach 2
	int bien = 1; //neu bien=1 thi do la so nguyen to, bien=0 thi khong la so nguyen to
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			bien = 0;
			break;
		}
	}
	if (bien == 1)
		printf("\nn la so nguyen to");
	else
		printf("\nn khong la so nguyen to");

	//tinh tong cac so nguyen to tu 1->n
	sum = 0;
	int j;
	for (i = 1; i <= n; i++)
	{
		count = 0;
		for (j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)
				count++;
		}
		if (count == 1)
			sum = sum + i;
	}
	printf("\ntong cac so nguyen to=%d", sum);

	//co bao nhieu so khong phai so nguyen to tu 1->n

	//tong cac so tu 1->n

	//tinh s1=1+2+3+...+n
	int s1 = 0;
	for (i = 1; i <= n; i++)
	{
		s1 = s1 + i;
	}
	printf("\ns1=%d", s1);

	//tinh s2=1+3+5+7+...+(2n+1)
	int s2 = 0;
	for (i = 0; i <= n; i++)
	{
		s2 = s2 + (2 * i + 1);
	}
	printf("\ns2=%d", s2);

	//BTVN:
	//1.tinh tong cac so nguyen to tu 1->n
	//2.kiem tra xem n co phai la so chinh phuong khong?
	//3.tinh trung binh cac so la so chinh phuong tu 1->n
	//4. tinh n!=1.2.3......n
	//5.tinh s3=4+6+8+...+2n
	//6.tinh  s4=n+3!+5!+....+(2n-1)!

	return 0;
}
