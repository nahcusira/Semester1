#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int a,b;
	printf("\nenter a,b:");
	scanf("%d%d",&a,&b);
	
	if (a%b==0)
	{
		printf("\nb la uoc cua a");
	}	
	else
		{
			printf("\nb khong la uoc cua a");
		}
	
	if(b%a==0)
	{
		printf("\na la uoc cua b");
	}
	else
		{
			printf("\na khong la uoc cua b");
		}
	
	return 0;
}
