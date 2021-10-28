#include<stdio.h>
int main() {
	int n,m;
	printf("\nenter n:");
	scanf("%d",&n);
	printf("\nstar 1:\n");
	int i,j;
	for (i=1; i<=n; i++) {
		for (j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
	printf("\nenter m:");
	scanf("%d",&m);
	printf("\nrec 1:\n");
	for (i=1; i<=n; i++) {
		for(j=1; j<=m; j++)
			if(i==1||i==n||j==1||j==m) {
				printf("*");
			} else {

				printf(" ");
			}
		printf("\n");
	}





	return 0;
}
