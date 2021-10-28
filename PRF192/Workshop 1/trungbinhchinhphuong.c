#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,j;
	printf("\nenter n:");
	scanf("%d",&n);
	int sum=0;
	int count=0;
	int dem=0;
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)		
			if(j*j==i)
	        {	
			   count++;
			   dem=count+dem;
		    }
	        if(count==1)
	    	{
		    	sum=sum+i;
	    	}
	
    }
  
	printf("\ntb cac so chinh phuong tu 1->n:%f",(float)sum/dem);
	
	
	
	return 0;
}
