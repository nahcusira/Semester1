#include<stdio.h>
#include<math.h>
int main() {
	int x,i,n;
	printf("\nenter n:");
	scanf("\n%d",&n);
	printf("\nenter x:");
	scanf("\n%d",&x);
	int sum=1;
	float s1=0;
	for(i=1; i<=n; i++) {
		sum=sum*i;
		s1=s1+pow((-1),(i+1))*(pow(x,i))/sum;
	}
	printf("\ns1=%f",s1+1);
	return 0;
}
