#include<stdio.h>
#include<conio.h>
#include<math.h>
//nhap n
int input() {
	int n;
	printf("\nenter n:");
	scanf("%d",&n);
	return n;
}
//tim max
int max(int a, int b, int c) {
	int max=a;
	if (b>max)
		max=b;
	if (c>max)
		max=c;
	return max;
}
//tim uoc cua 1 so
int uoc(int n) {
	int i;
	printf("\ncac uoc cua n:");
	for (i=1; i<=n; i++)
		if (n%i==0)
			printf("%d ",i);
}

//kiem tra so nguyen to
int isprime(int n) {
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

//uoc chung lon nhat
int UCLN(int x,int y) {
	while(x!=y) {
		if (x>y)
			x=x-y;
		else
			y=y-x;
	}
	return x;
}

//gia tri lon nhat, nho nhat
int gtri(int e,int f){
	
	if ( e<f)
		printf("\ngia tri lon nhat la f, gia tri nho nhat la e");
	else 
		printf("\ngia tri lon nhat la e, gia tri nho nhat la f");
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

int main() {
	int n=input();
	printf("\nn!(n-1)!:%d",gt(n)*gt(n-1));
	printf("\nn!=%d",gt(n));
	isprime(n);
	cp(n);
	uoc(n);
	int x,y;
	printf("\nnhap x va y:");
	scanf("%d%d",&x,&y);
	printf("\nUCLN:%d", UCLN(x,y));
	printf("\nBCNN(%d,%d):%d",x,y,(x*y)/UCLN(x,y));
	int a;
	int b;
	int c;
	printf("\nnhap a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nmax=%d",max(a,b,c));
	int e,f;
	printf("\nkiem tra e,f:");
	scanf("%d%d",&e,&f);
	printf("\n",gtri(e,f));
	return 0;

}
