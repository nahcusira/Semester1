#include<stdio.h>
int main(){
	char account[20],pass[20];
	printf("\naccount:");
	gets(account);
	printf("\npassword:");
	gets(pass);
	
	//su dung ham strcmp(chuoi 1, chuoi 2) de so sanh
	if(strcmp(account,"admin")==0&&strcmp(pass,"123")==0)
		printf("\nlogin successfully");
	else{
	
		printf("\nlogin failled");
		return;
	}
	printf("\ncountinue...");
	//nhap 2 chuoi so
	//hieno thi tong, hieu, tich, thuong cua 2 chuoi do
	char a[10],b[10];
	printf("\nenter a:");
	gets(a);
	printf("\nenter b:");
	gets(b);
	int tong=atoi(a)+atoi(b);
	printf("\ntong=%d",tong);
	int hieu=atoi(a)-atoi(b);
	printf("\nhieu=%d",hieu);
	int tich=atoi(a)*atoi(b);
	printf("\ntich=%d",tich);
	float thuong=(float)atoi(a)/atoi(b);
	printf("\nthuong=%f",thuong);
	char m[10],n[10];
	printf("\nenter m:");
	gets(m);
	printf("\nenter n:");
	gets(n);
	
	float tong1=atof(m)+atof(n);
	printf("\ntong=%f",tong1);
	float hieu1=atof(m)-atof(n);
	printf("\nhieu=%f",hieu1);
	float tich1=atof(m)*atof(n);
	printf("\ntich=%f",tich1);
	float thuong1=atof(m)/atof(n);
	printf("\nthuong=%f",thuong1);
	
	//nhap 1 chuoi. ex: a12b34c5
	//tinh tong cac ki tu so trong chuoi. tong=1+2+3+4+5=15
	//tinh tong cac so trong chuoi. tong= 12+35+5=51
	//ki tu so: x>47,x<57	
	
	
	return 0;
}
