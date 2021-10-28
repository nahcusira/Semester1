#include<stdio.h>
void inputarray(int a[],int n,char str[]){
	int i;
	for (i=0; i<n; i++) {
	//	printf("\n%s[%d]=",str,i);
		scanf("%d",&a[i]);
	}
}
int main(){
	int a[100];
	int n,i;
	printf("\nenter n:");
	scanf("%d",&n);
	inputarray(a,n,"a");
	int count=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0&&i%2!=0)
			count++;
	}
	int sum=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0&&i%2!=0)
			sum+=a[i];
	}
	printf("\ntrung binh:%f",(float)sum/count);
	printf("\nphan tu chia het cho 2 nhung khong chia het cho 3 trong mang la:");
	for(i=0;i<n;i++){
		if(a[i]%2==0&&a[i]%3!=0)
			printf("%d ",a[i]);
	}
	
		
		
		
		
	return 0;
}
