#include<stdio.h>
int main(){
	char chuoi[100];
	printf("\nenter chuoi:");
	gets(chuoi);
	char tu[strlen(chuoi)+1];
	int i,j=0;
	int start;
	for (i=0; chuoi[i]!=' '; i++) {
		start=i;
		tu[j]=chuoi[i];
		j++;
	}
	tu[j]='\0';
	printf("\ntu dau tien:%s",tu);
	return 0;
}
