#include<stdio.h>
#include<math.h>
int main() {
	int n;
	printf("\nenter n:");
	scanf("%d",&n);

	//su dung for de hien thi cac so tu 1->n
	printf("\ncac so tu 1->n:");
	int i;
	for (i=1; i<=n; i++)
		printf("%d ",i);

	//su dung while
	printf("\ncac so tu 1->n:");
	i=1;
	while(i<=n) {
		printf("%d ",i);
		i++;
	}

	//hien cac phan tu chan tu 1->n
	printf("\nhien cac so chan tu 1->n:");
	i=1;
	while(i<=n) {
		if (i%2==0)
			printf("%d ",i);
		i++;
	}


	//1.dem so phan tu tan cung la 3 tu 1->n
	//2.tinh n!
	//3.tinh s=1+3+5+7+......+(2n-1)


	//1.dem so phan tu tan cung la 3 tu 1->n
	i=1;
	int count=0;
	while(i<=n) {
		if (i%10==3)
			count++;
		i++;
	}
	printf("\ncac phan tu tan cung la 3 tu 1->n:%d",count);

	//2.tinh n!
	i=1;
	long gt=1;
	while(i<=n) {
		gt=gt*i;
		i++;
	}
	printf("\nn!=%ld",gt);


	//3.tinh s=1+3+5+7+......+(2n-1)
	int s=0;
	i=1;
	while(i<=n) {
		s=s+(2*i-1);
		i++;
	}
	printf("\ns=%d",s);


	//nhap 2 so nguyen a va b
	//tim uoc chung lon nhat va boi chung nho nhat cua 2 so
	int a,b;
	printf("\nenter a,b:");
	scanf("%d%d",&a,&b);
	int a1=a,b1=b;
	while(a!=b) {
		if (a>b)
			a=a-b;
		else
			b=b-a;
	}
	printf("\nuoc chung lon nhat(%d,%d):%d",a1,b1,a);
	printf("\nboi chung nho nhat(%d,%d):%d",a1,b1,(a1*b1)/a);


	//tam so can
	printf("\nstar:\n");
	int j;
	for (i=1; i<=n; i++) {
		for (j=1; j<=n-i; j++)
			printf("  ");
		for (j=i; j>=1; j--)
			printf("%2d",j);
		for(j=2; j<=i; j++)
			printf("%2d",j);
		printf("\n");
	}












	return 0;
}
