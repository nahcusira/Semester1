#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void check(int str[], int n){
	int i,dem=0;
	for(i=0;i<n;i++){
		if(str[i]!=str[n-1-i])
			dem++;
	}
	if(dem==0)	printf("1");
	else printf("0");
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int str[20];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&str[i]);
	}
	
	
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	check(str,n);
	






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
