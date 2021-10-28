#include<stdio.h>
#include<math.h>
int main() {
	int x,i,n,j;
	printf("\nenter n:");
	scanf("\n%d",&n);
	printf("\nenter x:");
	scanf("\n%d",&x);
	int sum=1;
	float s4=0;
	for(i=2; i<=2*n; i+=2) {
		for(j=1; j<=i; j++) {
			sum=sum*j;
		}
		s4=s4+pow(-1,i/2)*(pow(x,i))/sum;
		sum=1;
	}
	printf("\ns4=%f",s4+1);
	return 0;
}

