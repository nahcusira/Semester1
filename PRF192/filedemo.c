#include<stdio.h>
#include<stdlib.h>
int nt(int n) {
	int i;
	if (n<2)
		return 0;
	for (i=2; i<=n/2; i++)
		if (n%i==0)
			return 0;
	return 1;
}
int main() {
	/*
	//tao con tro tro toi file input
	FILE *fptr;

	//open file va doc du lieu tu file do, hien thi len man hinh
	//open file
	if((fptr=fopen("input.txt","r"))==NULL) {
		printf("\nkhong the mo file");
		return;
	}
	printf("\nmo file thanh cong");
	//doc file
	char str[100];
	printf("\ndu lieu la:");
	while(!feof(fptr)) {
		fgets(str,100,fptr);
		printf("%s",str);
	}
	fclose(fptr);
	//mo de ghi du lieu vao file output.txt
	if((fptr=fopen("output.txt","w"))==NULL) {
		printf("\nkhong the mo file");
		return;
	}
	printf("\nmo file thanh cong");

	//ghi du lieu
	int i;
	for(i=0; i<10; i++) {
		if(i==9)
			fputs("ahaha",fptr);
		else
			fputs("ahaha\n",fptr);
	}
	fclose(fptr);
	*/
	//trong file input.txt chua ca so va chu
	//doc file input.txt->chuoi
	FILE *fptr;
	if((fptr=fopen("input1.txt","r"))==NULL) {
		printf("\nkhong the mo file");
		return;
	}
	printf("\nmo file thanh cong");
	char str[1000];
	printf("\ndu lieu la:");
	while(!feof(fptr)) {
		fgets(str,1000,fptr);
	}
	fclose(fptr);
	if((fptr=fopen("output1.txt","w"))==NULL) {
		printf("\nkhong the mo file");
		return;
	}
	printf("\nmo file thanh cong");

	//ghi du lieu
	
	fclose(fptr);
	
	//tim nhung ki tu la so nguyen to trong chuoi tren
	//ghi ket qua vao file output.txt


	return 0;
}
