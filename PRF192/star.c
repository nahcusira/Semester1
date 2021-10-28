#include<stdio.h>
/*
****
****
****
****
*/
void hinhvuong(int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
}
/*
****
*  *
*  *
*  *
*/
void hinhvuong1(int n){
	int i,j;
	for(i=0;i<n;i++){
		if(i==0){
			for(j=0;j<n;j++){
				printf("*");
			}
		}else{
			printf("*");
			for(j=0;j<n-2;j++){
				printf(" ");
			}
			printf("*");
		}	
		
		printf("\n");
	}
}
/*
*  *
*  *
*  *
****
*/
void hinhvuong2(int n){
	int i,j;
	for(i=0;i<n;i++){
		if(i==n-1){
			for(j=0;j<n;j++){
				printf("*");
			}
		}else{
			printf("*");
			for(j=0;j<n-2;j++){
				printf(" ");
			}
			printf("*");
		}	
		
		printf("\n");
	}
}
/*
****
*  *
*  *
****
*/
void hinhvuong3(int n){
	int i,j;
	for(i=0;i<n;i++){
		if(i==n-1||i==0){
			for(j=0;j<n;j++){
				printf("*");
			}
		}else{
			printf("*");
			for(j=0;j<n-2;j++){
				printf(" ");
			}
			printf("*");
		}	
		
		printf("\n");
	}
}
//tam giac can nguoc
void can(int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<2*(n-i)-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	int n,m;
	printf("\nenter n:");
	scanf("%d",&n);
	hinhvuong2(n);
	can(n);
	printf("\nstar 1:\n");
	int i,j;
	for (i=1; i<=n; i++) {
		for (j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
	printf("\nstar 1:\n");
	for (i=0; i<n; i++) {
		for(j=0;j<i;j++)
			printf(" ");
		for (j=i; j<n; j++)
			printf("*");
		printf("\n");
	}


	printf("\nstar 2:\n");
	for (i=1; i<=n; i++) {
		for (j=1; j<=2*i-1; j++)
			printf("*");
		printf("\n");
	}

	int k;
	printf("\nstar 3:\n");
	for (i=1; i<=n; i++) {
		for(k=1; k<=2*n-2*i; k++)
			printf(" ");
		for (j=1; j<=2*i-1; j++)
			printf("*");
		printf("\n");
	}


//tam giac can
	printf("\nstar 4:\n");
	for (i=1; i<=n; i++) {
		for(k=1; k<=n-i; k++)
			printf(" ");
		for (j=1; j<=2*i-1; j++)
			printf("*");
		printf("\n");
	}


	printf("\nenter m:");
	scanf("%d",&m);
	printf("\nrec 1:\n");
	for (i=1; i<=n; i++) {
		for(j=1; j<=m; j++)
			if(i==1||i==n||j==1||j==m) {
				printf("*");
			} else {

				printf(" ");
			}
		printf("\n");
	}


//m le,n le

	printf("\nrec 2:\n");
	

if (m%2==0 && n%2==0)
	for (i=1; i<=n; i++) {
		for(j=1; j<=m; j++)
			if(i==1||i==n||j==1||j==m) {
				{
				if (n%2!=0&& m%2!=0)
					printf("*");
				printf("*");}
			} else {

				printf(" ");
			}
		printf("\n");
	}






//BTVN:hien tam giac can la so
//		1
//	   212
//    32123
//   4321234
	return 0;
}
