#include<stdio.h>
#include<conio.h>
#include<math.h>
int ngto(int n) {
	if(n==0||n==1) return 0;
	int i;
	for(i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;
}
void lietke(int n) {
	int i=2;
	int count=0;
	while(count<n) {
		if (ngto(i)==1) {
			printf("%d ",i);
			count++;
		}
		i++;
	}
}


int ktcp(int n) {
	int i,count=0;
	for(i=1; i<=n; i++) {
		if(i*i==n)
			return 1;
	}
	return 0;
}

void socp(int n) {
	int i;
	int count=0;
	for(i=1; i<=n; i++) {
		if (ktcp(i)==1&&i%2!=0)
			count++;
	}
	printf("\nso chinh phuong le la:%d",count);
}



void uoc(int n) {
	int i,j,tong=0,count=0;
	for(i=1; i<=n; i++) {
		count=0;
		for(j=1; j<=i/2; j++)
			if(i%j==0)
				count++;
		if(count==1)
			tong+=i;
	}
	printf("\nTong cac uoc nguyen to cua n la: %d",tong);
}

void boi(int n) {
	int i,count=0;
	for(i=1; count<n; i++)
		if(count<n) {
			if(i%n==0) {
				printf("\n%d",i);
				count++;
			}
		}
}






void s(int n) {
	int i,j;
	float sum=1,S=2019;
	for(i=5; i<=2*n+1; i+=2)
		if(i%2!=0) {
			for(j=1; j<=i; j++)
				sum*=i;
			S=S+1/sum;
		}
	printf("\nS= %f",S);
}








int main() {
	int n;
	printf("\nenter n:");
	scanf("%d",&n);
	while(n%2!=0) {
		printf("\nenter n:");
		scanf("%d",&n);
	}
	lietke(n);
	socp(n);

	uoc(n);
	boi(n);
	s(n);
	return 0;
}
