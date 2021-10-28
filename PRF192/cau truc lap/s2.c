#include<stdio.h>
#include<math.h>
int main() {
	int x,i,n;
	printf("\nenter n:");
	scanf("\n%d",&n);
	printf("\nenter x:");
	scanf("\n%d",&x);
	float s2=0;
	for(i=2; i<=n; i++) {
		s2=s2+pow((-1),(i+1))*(x+i-1)/i;
	}
	printf("\ns2=%f",s2+exp(x)+sin(2*x));
	return 0;
}
