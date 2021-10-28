#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int ngto(int n) {
		if(n==0||n==1) return 0;
		int i;
		for(i=2; i<=sqrt(n); i++)
			if(n%i==0) return 0;
		return 1;
	}
	int i=2;
	int count=0;
	while(count<n) {
		if (ngto(i)==1) {
			printf("%d ",i);
			count++;
		}
		i++;
	}
	return 0;
}
