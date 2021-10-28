#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//cac ham trong truong trinh (hoc sau)
int main() {
	//cac cau lenh xu ly trong truong trinh
	int n=12,m=15,k;
	printf("\nenter n:");
	scanf("%d",			&n);
	printf("\nenter m:");
	scanf("%d",&m);
	printf("\nenter k:");
	scanf("%d",&k);

	printf("\n%d+%d=%4d",n,m,n+m);
	printf("\n%d-%d=%4d",n,m,n-m);
	printf("\n%d*%d=%4d",n,m,n*m);
	float chia=(m==0)?0:(float)n/m;
	printf("\n%d/%d=%.2f",n,m,chia);
	int du=(m==0)?0:n%m;
	printf("\n%d%%%d=%4d",n,m,du);






	//luyen tap toan tu dieu kien
	//n<m,n>m,n=m
	(n>m)?printf("\nn>m"):(n<m)?printf("\nn<m"):printf("\nn=m");
	//kiem tra n la so am, so duong, hay so khong?
	(n==0)?printf("\nn=0"):(n<0)?printf("\nn<0"):printf("\nn>0");
	//dien tich

	//2
	printf("\ndien tich hcn=%d",n*m);
	printf("\nchu vi hcn=%d",(n+m)*2);
	printf("\nduong cheo hcn=%f",sqrt(pow(n,2)+pow(m,2)));
	//3

	printf("\nchu vi tam giac=%f",(float)(n+m+k)/2);

	printf("\ndien tich tam giac=%f",(float)sqrt( ((n+m+k)/2) * (((n+m+k)/2)-n) * (((n+m+k)/2)-m) * (((n+m+k)/2)-k)  ));

	//4

	printf("\ndien tich hinh thang can=%f",(float)(k*(((m-n)/2)+n)));

















	//nhap 1 so nguyen the hien tong so giay
	//hien thi dang sau: gio:phut:giay
	printf("\nenter tong so giay:");
	int tong;
	scanf("%d",&tong);
	int giay=tong%60;
	int phut=(tong/60)%60;
	int gio=tong/60/60;
	printf("\n%02d:%02d:%02d",gio,phut,giay);


	//pratice
	//1.kiem tra xem n,m chan hay le?
	//2.coi n,m la do dai 2 canh cua hinh chu nhat. tinh dien tich, chu vi, duong cheo cua hinh chu nhat do
	//3.nhap them 1 bien k. coi n,m,k la 3 canh cua tam giac. tinh dien tich va chu vi cua tam giac do
	//4. coi n,m,k la 2 canh day va chieu cao cua hinh thang can. tinh dien tich va chu vi cua hinh thang do


















	return 0;
}
