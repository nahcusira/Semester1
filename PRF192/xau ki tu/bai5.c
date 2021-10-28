#include<stdio.h>
#include<string.h>
int check(char str[], int n){
	n=strlen(str);
	int i;
	for(i=0;i<n/2;i++){
		if(str[i]!=str[n-1-i])
			return 0;
	}
	return 1;
}

int main() {
	int n;
	char str[100];
	printf("\nenter str:");
	gets(str);
	if(check(str,n)==1)
		printf("\nxau ki tu la palindrome");
	else 
		printf("\nxau ki tu khong la palindrome");
	
	
	
	
	
	return 0;
}
