#include<stdio.h>
#include<math.h>
int main() {
	int x,i,n,j;
	printf("\nenter n:");
	scanf("\n%d",&n);
	printf("\nenter x:");
	scanf("\n%d",&x);
	int sum=1;
	float s3=0;
	for(i=1; i<=2*n+1; i+=2) {
		for(j=1; j<=i; j++) {
			sum=sum*j;
		}
		s3=s3+pow(x,i)/sum;
		sum=1;
	}
	printf("\ns3=%f",s3+1);
	return 0;
}
