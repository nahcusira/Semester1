#include<stdio.h>
#include<math.h>
int main() {
	int i,n;
	printf("\nenter n:");
	scanf("%d",&n);
	int count=0;
	for (i=1; i<=n; i++) {
		if (i*i==n)
			count++;
	}
	if(count==1)
		printf("\nn la so chinh phuong");
	else
		printf("\nn khong la so chinh phuong");
	count=0;
	for (i=1; i<=n/2; i++)
		if (n%i==0)
			count++;
	if (count==1)
		printf("\nn la so nguyen to");
	else
		printf("\nn khong la so nguyen to");
	return 0;
}
