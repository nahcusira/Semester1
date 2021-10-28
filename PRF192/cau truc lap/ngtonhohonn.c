#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {

	int n,j,i;
	printf("\nenter n:");
	scanf("\n%d",&n);
	int dem=0;
	for (i=2; i<=n; i++) {
		for (j=1; j<=i; j++) {
			if(i%j==0)
				dem++;
		}
		if(dem==2)
			printf("%d ",i);
		dem=0;
	}
	return 0;
}
