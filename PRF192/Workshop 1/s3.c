#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	int s3=0;
	printf("\nenter n:");
	scanf("%d",&n);
	if (n<2)
		printf("\nn>=2");
	else
	{
	
	for(i=2;i<=n;i++)
			s3=s3+2*i;	
	printf("\ns3=%d",s3);
		
	}
	
	
	
	
	
	
	



	
	return 0;
}
