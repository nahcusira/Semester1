#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	float a,b;
	printf("\nnuoc thang nay:");
	scanf("%f",&a);
	printf("\nnuoc thang sau:");
	scanf("%f",&b);
	int x=100;
	int y=150;
	if(a<=x)
	{
		printf("\nchi so nuoc:%f",a);
		printf("\nso tien phai tra:%f",a*800);
	}
	if(a>x)
	{
		if(a<=y)
			{
			printf("\nchi so nuoc:%f",a);
			printf("\nso tien phai tra:%f",a*1200);
			}
	}
	if(a>y)
	{
		printf("\nchi so nuoc:%f",a);
		printf("\nso tien phai tra:%f",a*1500);
	}
	
	
	if(b<=x)
	{
		printf("\nchi so nuoc thang sau:%f",b);
		printf("\nso tien phai tra thang sau:%f",b*800);
	}
	if(b>x)
	{
		if(b<=y)
			{
			printf("\nchi so nuoc thang sau:%f",b);
			printf("\nso tien phai tra thang sau:%f",b*1200);
			}
	}
	if(b>y)
	{
		printf("\nchi so nuoc thang sau:%f",b);
		printf("\nso tien phai tra thang sau:%f",b*1500);
	}
	
return 0;
}
