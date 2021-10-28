#include<stdio.h>
#include<conio.h>
#include<math.h>
//mong muon xay dung 1 ham
//
int UCLN(int a,int b) {
	int a1=a,b1=b;
	while(a!=b) {
		if (a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}

//khong phai so nguyen to tu a den b
void show(int a, int b) {
	printf("\ncac so khong phai so nguyen to:",a,b);
	int count,i,j;


	for(i=a; i<=b; i++) {

		for (j=1; j<=i/2; j++)
			if (i%j==0)
				count++;
		if (count!=1)
			printf(" %d",i);
	}
}










//ham tinh tong so nguyen to tu 1->n
void sumprime(int n) {
	int i,sum=0;
	for(i=1; i<=n; i++) {
		if (isprime(i)==1)//neu i la so nguyen to?
			sum=sum+i;
	}
	printf("\ntong cac so nguyen to tu 1->n la:%d",sum);
}
//3.co bao nhieu uoc so nguyen to cua n
void countprime(int n) {
	int i,j,dem=0;
	for(i=1; i<=n; i++) {
		if (isprime(i)==1&&n%i==0)
			dem++;
	}
	printf("\nco %d uoc so nguyen to cua n",dem);
}
//4.hien cac so khong phai nguyen to tu 1->n
void showprime(int n) {
	printf("\ncac so khong phai la so nguyen to tu 1->n:");
	int i,j;
	for(i=1; i<=n; i++) {
		if (isprime(i)!=1)
			printf("%d ",i);
	}
}



int main() {
	//1.nhap 1 so nguyen duong n tu ban phim ( neu nhap sai thi bat nhap lai)
	int n=input("enter n:");

	/* cach 1:
	printf("\nenter n:");
	scanf("%d",&n);
	while(n<=0) {
		printf("\nenter n:");
		scanf("%d",&n);
	}
	*/

	//cach 2:



	//2.tinh tong cac so nguyen to tu 1->n
	sumprime(n);
	//3.co bao nhieu uoc so nguyen to cua n
	countprime(n);
	//4.hien cac so khong phai nguyen to tu 1->n
	showprime(n);

//bai tap:
//nhap 2 so duong a va b(luon nhap dung )
//xay dung ham tim UCLN va BCNN cua 2 so
//sau do o ham main goi 2 ham tren de tim UCLN va BCNN cua a va b

	int a=input("enter a:");
	int b=input("enter b:");

	printf("\nUCLN:%d", UCLN(a,b));
	printf("\nBCNN(%d,%d):%d",a,b,(a*b)/UCLN(a,b));
//ham hien nhung so khong phai nguyen to tu a->b ( ham void )
//ham main se goi ham tren de in ra ket qua
	int m=input("enter m:");


	show( a, b);
















	return 0;
}

int input(char str[]) {
	int n;
	do {
		printf("\n%s",str);
		scanf("%d",&n);
		if (n<=0)
			printf("\nnhap n > 0");
	} while(n<=0);
	return n;// tra ve gia tri dung o tren
}


//ham check n co phai so nguyen to k?
int isprime(int n) {
	int j,count=0;
	for(j=1; j<=n/2; j++) {
		if(n%j==0)
			count++;
	}
	return count;
}
