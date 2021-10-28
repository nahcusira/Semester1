//S=1/3!+1/5!+...+1/(2n-1)!
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,j;
	printf("\nenter n:");
	scanf("%d",&n);
	int gt=1;
	float sum;
    for(i=3;i<=2*n-1;i++)
    {
    	if(i%2!=0)
    	{
    		for(j=1;j<=i;j++)
    		{
    			gt=gt*j;
    			sum=sum+(1/gt);
			}
		}
	}
	printf("\ns=%f",(float)sum);












	
	
	
	
	
	
	
	return 0;
}
