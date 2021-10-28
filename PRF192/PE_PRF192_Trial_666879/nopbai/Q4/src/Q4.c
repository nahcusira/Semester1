#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[7];
	int i,n=7;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<=n-2; i++) {
		int j;
		for(j=i+1; j<=n-1; j++) {
			int tg;
			if(a[i]>a[j]) {
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	for (i=0; i<n; i++) {
		printf("%d ",a[i]);
	}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
