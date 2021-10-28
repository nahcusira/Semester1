#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
	int n,i,s=0;

	printf("\nenter n:");
	scanf("%d",&n);
	if (n>0) {
		for (i=1; i<=n; i++)
			s=s+(i*(i-2)*(i-1));
		printf("\ns=%d",s);
	} else printf("\nnhap n nguyen duong");





	return 0;
}
