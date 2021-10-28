#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
	int i,n,j;
	int s=1;
	printf("\nenter n:");
	scanf("%d",&n);
	if (n<0)
		printf("\nn >= 0");
	else {
		if (n%2!=0) {
			for (i=1; i<=n; i++)
				if(i%2!=0)
					s=s*i;
		}
		if (n%2==0) {
			for (j=1; j<=n; j++)
				if(j%2==0)
					s=s*j;
		}
		printf("\ns=%d",s);
	}
	return 0;
}
