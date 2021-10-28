#include<stdio.h>
#include<math.h>
int main() {
	int i,n;
	int s=1;
	printf("\nenter n:");
	scanf("%d",&n);
	if (n<0)
		printf("\nn >= 0");
	else {

		for (i=1; i<=n; i++)
			s=s*i;
		printf("\nn!=%d",s);
	}


	return 0;
}
