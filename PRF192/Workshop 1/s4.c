#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int i,n,j;
	printf("\nenter n:");
	scanf("%d",&n);
	int sum=0;
	int gt=1;
    for(i=3;i<=2*n-1;i++)
    {
    	if(i%2!=0)
    	{
    		for(j=1;j<=i;j++)
    		{
    			gt=gt*j;
			}
		    sum=sum+gt;
		 	gt=1;
	
		}
	}
	printf("\ns4=%d",sum+n);
			
			
	
	
	return 0;
}
