#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
	int a,b;
	printf("\nenter a,b:");
	scanf("%d%d",&a,&b);
	if (a<=0||b<=0)
		printf("\nnhap a,b duong");
	int a1=a,b1=b;
	while(a!=b) {
		if (a>b)
			a=a-b;
		else
			b=b-a;
	}
	printf("\nuoc chung lon nhat(%d,%d):%d",a1,b1,a);
	printf("\nboi chung nho nhat(%d,%d):%d",a1,b1,(a1*b1)/a);
	return 0;
}
