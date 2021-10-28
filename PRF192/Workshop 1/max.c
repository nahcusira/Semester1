#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	float a,b,c,d;
	printf("\nenter a,b,c,d:");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	float max=a;
	if (b>max)
	{
		max=b;
	}
	if (c>max)
	{
		max=c;
	}
	if (d>max)
	{
		max=d;
	}
	printf("\nmax=%f",max);
return 0;
}
 
