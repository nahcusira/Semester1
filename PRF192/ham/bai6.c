#include<stdio.h>
#include<conio.h>
#include<math.h>
//so nguyen to
int nt(int n) {
	int count=0;
	int i;
	for (i=1; i<=n/2; i++)
		if (n%i==0)
			count++;
	if (count==1)
		printf("\nn la so nguyen to");
	else
		printf("\nn khong la so nguyen to");
}
//so chinh phuong
int cp(int n) {
	int i;
	int count=0;
	for (i=1; i<=n; i++) {
		if (i*i==n)
			count++;
	}
	if(count==1)
		printf("\nn la so chinh phuong");
	else
		printf("\nn khong la so chinh phuong");
}
//n!
int gt(int n) {
	int i;
	int s=1;
	if (n<0)
		printf("\nn >= 0");
	else {
		for (i=1; i<=n; i++)
			s=s*i;
	}
	return s;
}

//s=
float s(int n) {
	int i;
	float sum=0;
	for(i=1; i<=2*n; i++) {
		if (i%2==0) {
			int j;
			int gt=1;
			for(j=1; j<=i; j++) {

				gt=gt*j;
			}
			sum=sum+1.0/gt;
		}
	}
	printf("\ns=%f\n",sum);
}

//kiem tra
int ngto(int i) {
	int x, n = i / 2;

	for(x=2; x<n; x++) {
		if ((i % x) == 0)
			return 0;
	}

	return 1;
}






int main() {
	int n;
	printf("\nenter n:");
	scanf("%d",&n);
	while(n>10||n<0) {
		printf("\nenter n:");
		scanf("%d",&n);
	}
	s(n);
	int i,k,j;
	for (i=1; i<=n; i++) {
		for(k=1; k<=n-i; k++)
			printf(" ");
		for (j=1; j<=2*i-1; j++)
			printf("*");
		printf("\n");
	}

	int a=20,b=60;
	for (i=a; i<=b; i++) {
		if (ngto(i))
			printf(" %d ", i);
	}




	int s=0;
	for(i=1; i<=n; i++) {
		for(j=1; j<=i; j++) {
			if(j*j==i&&i%2!=0)
				s = s + i;
		}
	}

	printf("\nTong la %d", s);



	return 0;
}

