#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	printf("\nenter n:");
	scanf("%d",&n);
	int j;
	int count=0;
	int sum=0;
	for(i=1;i<=n;i++)
	{
    	count=0;
		for(j=1;j<=i/2;j++)
			{
			if(i%j==0)
				count++;
			}	
		if (count==1)
			sum=sum+i;
	}
	printf("\ntong cac so nguyen to tu 1->n la:%d",sum);			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
