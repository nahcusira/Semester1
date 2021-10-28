#include<stdio.h>
void inputarray(int a[],int n,char str[]) {
	int i;
	for (i=0; i<n; i++) {
		printf("\n%s[%d]=",str,i);
		scanf("%d",&a[i]);
	}
}
int show(int a[],int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("%d ",a[i]);
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
void demknt(int a[], int n) {
	int i,count=0;
	for(i=0; i<n; i++) {
		if(!(nt(i)))
			count++;
	}
	printf("\nphan tu co chi so khong la so nguyen to la:%d",count);
}
int cp(int n) {
	int i;
	for (i=1; i<=n; i++) {
		if (i*i==n)
			return 1;
	}
	return 0;
}
void minkcp(int a[], int n) {

	int min,i,check =0;
	for(i=0; i<n; i++) {
		if(!(cp(a[i]))) {
			check=1;
			min=a[i];
			break;
		}
	}
	if(check==1) {
		for(i=0; i<n; i++)

			if(a[i]<min&&!(cp(a[i]))) {

				min=a[i];
			}
		printf("\nmin khong phai chinh phuong=%d",min);
	} else
		printf("\nkhong co phan tu khong la so chinh phuong trong mang");
}
void sx(int a[], int n) {
	int i;
	for(i=0; i<=n-2; i++) {
		int j;
		for(j=i+1; j<=n-1; j++) {
			int tg;
			if(a[i]>a[j]&&!(cp(a[i]))&&!(cp(a[j]))&&!(nt(a[i]))&&!(nt(a[j]))) {
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	printf("\nmang sau khi sap xep tang dan phan tu khong la so nguyen to, chinh phuong:");
	show(a,n);	
}
int main() {
	int a[100];
	int n,i;
	printf("\nenter n:");
	scanf("%d",&n);
	inputarray(a,n,"a");
	printf("\nday vua nhap la:");
	show(a,n);
	demknt(a,n);
	minkcp(a,n);
	sx(a,n);
	int count=0;
	for(i=0;i<n;i++){
		if(nt(i))
			count++;
	}
	printf("\nphan tu co chi so la so nguyen to la:%d",count);
	return 0;
}

