#include<stdio.h>
int inputarray(int a[],int n){
	int i;
	for (i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
}
int calsum(int n){//tong cac phan tu trong mang
	int sum=0;
	while(n!=0){
		int du=n%10;
		n=n/10;
		sum=sum+du;
	}
	return sum;
}

int main(){
/*	
	
//	int a[100];	
	int n;
	printf("\nenter n:");
	scanf("%d",&n);
//	inputarray(a,n);
//	showarray(a,n);
	char cr;
	scanf("%c",&cr);
	printf("%d %.4o",cr,cr);//.4 in 4 chu so
//	int sum=calsum(n);
//	printf("%d",sum);
	printf("%c %x",n,n);
	
	
	
	
	char ch;
	scanf("%c",&ch);
	printf("%c",ch);
	
	
	int i=1;
	while(i<=10)
		if(i%2==1)
			printf("%d",i++);
		else
			printf("%d",i--);
	
	
	
	
	int ref[]={1,2,4};
	printf("%d",*(ref));
	
	
	int i=5;
	printf("%d\n",i=++i==6);
	
	char note[]="meet me at 7pm";
	char *ptr;
	ptr=note;
	note[7]='\0';
	puts(++ptr);
	return 0;
	
	char str[]="abcdef";
	int i;
	for(i=0;i<strlen(str);i++){
		if(i%2==0)	str[i]=toupper(str[i]);}
		printf("%s",str);
	
	int x=0;for(  ; ; ){
		if(x++==6) break;
		continue;
	}
	printf("%d\n",x);
	
	
	
	
	int x;
	for(x=0;x<10;x++){
		
	}
	printf("%d",x);
	
	int a=2;
	printf("%d",++a,a+5);
	
	int x=5;
	for(;x==0;x--){
		printf("%d\n",x--);
	}
	
	int a[5]={0},x=123;
	while(x>10){
		a[x%10-1]++;
		x/=10;
	}
	printf("%d",a[1]);
	
	int x=1000;
	while(x++<1003)
	printf("%d\n",x);
	printf("%d",x);
	
	int a=2;
	printf("%d",++a,a+5);
	
	int i=5;
	printf("%d\n",i=++i==6);
	
	int a=1,i=7;
	if(a||i++)	i++;
	printf("%d",i);
	*/
	char str[]="abcd";
	int i, len=strlen(str);
	for(i=1;i<len;i++)
	str[i]++;
	printf("%s",str);
	return 0;
}
