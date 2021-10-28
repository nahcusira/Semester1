#include<stdio.h>
#include<string.h>
int main() {
	int i,n;
	char str[100];
	printf("\nenter str:");
	gets(str);
	int ok=1;//ok =1 tuc la chuoi so nguyen, =0 thi la khong phai
	for(i=0; i<strlen(str); i++) {
		if(str[i]<48||str[i]>57||str[0]=='0') {
			ok=0;
			break;
		}
	}
	if(ok==1) {
		printf("\nday la chuoi so:%d",atoi(str));
	} else
		printf("\nday khong la chuoi so nguyen");
	return 0;
}
