#include<stdio.h>
void inputarray(float a[],int n,char str[]) {
	int i;
	for (i=0; i<n; i++) {
		printf("\n%s[%d]=",str,i);
		scanf("%f",&a[i]);
	}
}
void show(float a[],int n) {
	printf("\nmang vua nhap la:");
	int i;
	for (i=0; i<n; i++) {
		printf("%f ",a[i]);
	}
}
int nt(int n) {
	int i;
	if (n<2)
		return 0;
	for (i=2; i<=n/2; i++)
		if (n%i==0)
			return 0;
	return 1;
}
int main() {
	float a[100];
	int n,i;
	printf("\nenter n:");
	scanf("%d",&n);
	inputarray(a,n,"a");
	show(a,n);
	int count=0;
	for(i=0; i<n; i++) {
		if(a[i]<0&&i%2!=0)
			count++;
	}
	printf("\nso phan tu am co chi so le:%d",count);
	int sum=0;
	{
		for(i=0; i<n; i++) {
			if(nt(a[i]))
				sum+=a[i];
		}
		printf("\ntong cac phan tu la so nguyen to:%d",sum);
	}



	return 0;
}
