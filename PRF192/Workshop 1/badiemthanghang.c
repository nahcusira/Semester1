#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
	int a1,a2,b1,b2,c1,c2;
	printf("\nXa:");
	scanf("%f",&a1);

	printf("Ya:");
	scanf("%f",&a2);

	printf("\nXb:");
	scanf("%f",&b1);

	printf("Yb:");
	scanf("%f",&b2);

	printf("\nXc:");
	scanf("%f",&c1);

	printf("Yc:");
	scanf("%f",&c2);





	if ((b1-a1)/(b2-a1)==(c1-a1)/(c2-a2)) {
		printf("\ndien tich tam giac la:%f",(float)(1/2)*abs( (b1-a1) * (c2-a2) - (c1-a1) * (b2-a2) ));
	} else {
		printf("\n3 diem khong tao thanh 1 tam giac");
	}






	return 0;
}
