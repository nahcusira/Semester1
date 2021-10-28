#include<stdio.h>
#include<conio.h>
#include<math.h>
//so nguyen to
int nt(int n) {
	int i;
	if (n<2)
		return 0;
	for (i=2; i<=n/2; i++)
		if (n%i==0)
			return 0;
	return 1;
}
//so chinh phuong
int cp(int n) {
	int i;
	for (i=1; i<=n; i++) {
		if (i*i==n)
			return 1;
	}
	return 0;
}

//check ngto, chinh phuong
int check(int n) {
	if (nt(n)==1)
		printf("\n%d la so nguyen to",n);
	if (cp(n)==1)
		printf("\n%d la so chinh phuong",n);
}


//UCLN
int UCLN(int x,int y) {
	while(x!=y) {
		if (x>y)
			x=x-y;
		else
			y=y-x;
	}
	return x;
}

void BCNN(int x,int y) {
	printf("\nBCNN(%d,%d):%d",x,y,(x*y)/UCLN(x,y));
}



//n! nhung so khong phai so nt hoac so cp
int gt(int n) {
	int i;
	int s=1;
	if (nt(n)!=1&&cp(n)!=1) {
		for (i=1; i<=n; i++)
			s=s*i;
	}
	return s;
}

//N!
int giaithua(int n) {
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

//GTLN,GTNN
int max(int x, int y,int z,int u,int o) {
	int max=x;
	if (x>max)
		max=x;
	if (y>max)
		max=y;
	if(z>max)
		max=z;
	if (u>max)
		max=u;
	if(o>max)
		max=0;

}
int min(int x,int y) {
	if(x<y)
		return x;
	return y;
}




int main() {
	int a,b,c,d,e;
	printf("\nnhap 5 so nguyen:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("\nmax:%d",max(a,b,c,d,e));
	printf("\n\n%d!=%d",a,gt(a));
	printf("\n%d!=%d",b,gt(b));
	printf("\n%d!=%d",c,gt(c));
	printf("\n%d!=%d",d,gt(d));
	printf("\n%d!=%d\n",e,gt(e));
	check(a);
	check(b);
	check(c);
	check(d);
	check(e);
	int n,i;
	int s=0;
	printf("\nenter n:");
	scanf("%d",&n);
	while(cp(n)==0) {
		printf("\nenter n:");
		scanf("%d",&n);
	}

	int j;
	int sum=0;
	int gt=1;
	for(i=1; i<=2*n-1; i++) {
		if(i%2!=0) {
			for(j=1; j<=i; j++) {
				gt=gt*j;
			}
			sum=sum+gt;
			gt=1;

		}
	}
	printf("\ns=%d",sum);
	
	
	







	return 0;
}
