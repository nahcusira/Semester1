#include<stdio.h>
#include<math.h>
int main()
{
	
	int a,b;
	printf("\nenter a,b:");
	scanf("%d%d",&a,&b);
	/*
	//so sanh xem a>b khong?
	if(a>b)
	{
		printf("\na>b");
	}
	if(a<b)
	{
		printf("\na<b");
	}
	if(a==b)
	{
		printf("\na=b");
	}
	//su dung if du
	if (a>b)
	{
		printf("\na>b");
	}
	else
	{
		if (a==b)
		{
			printf("\na=b");
		}
		else
		{
			printf("\na<b");
		}
	}
	//kiem tra xem a la so duong, am hay so khong
	if(a==0)
	{
		printf("\na=0");
	}
	else
	{
		if (a>0)
		{
			printf("\na duong");
		}
		else
		{
			printf("\na am");
		}
	}
	//1.kiem tra xem a,b chan hay le?
	//2.giai phuong trinh bac 1: ax+b=0
	//3.nhap c. giai pt bac 2
	//4.giai phuong trinh: ax2.+bx+c=0
	//1.
	if (a==0)
	{
		printf("\na khong chan, khong le");
	}
	else
	{
		if (a%2==0)
		{
			printf("\na chan");
		}
		else
		{
			printf("\na le");
		}
	}
	
	
	//2.
	float x;
	if (a==0)
	{
		if (b==0)
		{
			printf("\npt vo so nghiem");
		}
		else
		{
			printf("\npt vo nghiem");
		}
	}
	else
	{
		printf("\nx=%f",(float)-b/a);
	}
	 
	
	
	
	
	*/
	
	do{
		printf("%d ",a);
		a++;
	}
	while(a<=b);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
