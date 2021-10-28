#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int sx(int a[], int n){
	int i;
	for(i=0; i<=n-2; i++) {
		int j;
		for(j=i+1; j<=n-1; j++) {
			int tg;
			if(a[i]<a[j]) {
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int str[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&str[i]);
	}
sx(str,n);

  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

for(i=0;i<n;i++){
	if(str[i]%2==0){
	printf("%d",str[i]);
	printf("\n");
}
  
}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
