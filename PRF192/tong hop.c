strrev(str)					 //dao nguoc chuoi
	strcat(str, str1)		 //noi chuoi str1 vao sau str
	strncat(str, str1, n)	 //noi n ki tu cua str1 vao str
	strlwr("chu can chuyen") //A->a
	strupr("chu can chuyen") //a->A
	void inputarray(float a[], int n, char str[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\n%s[%d]=", str, i);
		scanf("%f", &a[i]);
	}
}
void show(float a[], int n)
{
	printf("\nday vua nhap la:");
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%f ", a[i]);
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
void sx(int a[], int n)
{
	int i;
	for (i = 0; i <= n - 2; i++)
	{
		int j;
		for (j = i + 1; j <= n - 1; j++)
		{
			int tg;
			if (a[i] > a[j] && !(cp(a[i])) && !(cp(a[j])) && !(nt(a[i])) && !(nt(a[j])))
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	printf("\nmang sau khi sap xep tang dan phan tu khong la so nguyen to, chinh phuong:");
	show(a, n);
}
//tong cac phan tu trong mang
int calsum(int n)
{
	int sum = 0;
	while (n != 0)
	{
		int du = n % 10;
		n = n / 10;
		sum = sum + du;
	}
	return sum;
}
//parindrome
int check(char str[], int n)
{
	n = strlen(str);
	int i;
	for (i = 0; i < n / 2; i++)
	{
		if (str[i] != str[n - 1 - i])
			return 0;
	}
	return 1;
}
//mang doi xung
void check(int str[], int n)
{
	int i, dem = 0;
	for (i = 0; i < n; i++)
	{
		if (str[i] != str[n - 1 - i])
			dem++;
	}
	if (dem == 0)
		return 1;
	else
		return 0;
}
//so hoan hao
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
//ham dao nguoc
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
int max = a[0];
//kiem tra lai gia tri max trong mang
int i;
for (i = 0; i < n; i++)
{
	if (a[i] > max)
		max = a[i];
}
printf("\nmax=%d", max);
// n!
i = 1;
long gt = 1;
while (i <= n)
{
	gt = gt * i;
	i++;
}
//tam giac so can
printf("\nstar:\n");
int j;
for (i = 1; i <= n; i++)
{
	for (j = 1; j <= n - i; j++)
		printf("  ");
	for (j = i; j >= 1; j--)
		printf("%2d", j);
	for (j = 2; j <= i; j++)
		printf("%2d", j);
	printf("\n");
}
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
