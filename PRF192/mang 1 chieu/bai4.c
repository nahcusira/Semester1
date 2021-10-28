#include<stdio.h>
void inputarray(int a[],int n,char str[]){
	int i;
	for (i=0; i<n; i++) {
		printf("\n%s[%d]=",str,i);
		scanf("%d",&a[i]);
	}
}
int main(){
	int a[100];
	int n,i;
	printf("\nenter n:");
	scanf("%d",&n);
	inputarray(a,n,"a");
	int max,check=0;
	for(i=0; i<n; i++) {
		if(a[i]%2==0) {
			check=1;
			max=a[i];
			break;
		}
	}
	if(check==1) {
		for(i=0; i<n; i++)

			if(a[i]>max&&a[i]%2==0) {
				max=a[i];
			}
		printf("\nmax chan=%d",max);
	} else
		printf("\nkhong co phan tu chan trong mang");
	int count=0;
	for(i=0;i<n;i++){
		if(a[i]>=max)
			count++;
	}
	printf("\n co %d phan tu >= phan tu max",count);
	return 0;
}
