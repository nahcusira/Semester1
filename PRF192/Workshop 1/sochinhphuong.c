#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	printf("\nenter n:");
	scanf("%d",&n);
	int count=0;
	for (i=1;i<=n;i++)
		{
			if (i*i==n)
				count++;
		}
	if(count==1) 
		printf("\nn la so chinh phuong");
	else 
		printf("\nn khong la so chinh phuong");	
	return 0;
	
}
