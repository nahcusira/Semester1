#include<stdio.h>
void inputarray(float a[],int n,char str[]){
	int i;
	for (i=0; i<n; i++) {
		printf("\n%s[%d]=",str,i);
		scanf("%f",&a[i]);
	}
}
void show(float a[],int n){
	printf("\nday vua nhap la:");
	int i;
	for (i=0; i<n; i++) {
		printf("%f ",a[i]);
	}
}
int main(){
	float a[100];
	int n,i;
	printf("\nenter n:");
	scanf("%d",&n);
	inputarray(a,n,"a");
	show(a,n);
	for(i=0; i<=n-2; i++) {
		int j;
		for(j=i+1; j<=n-1; j++) {
			float tg;
			if(a[i]<a[j]) {
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	printf("\nmang sau khi sap xep giam dan:");
	show(a,n);
	
	
	
	
	return 0;
}
