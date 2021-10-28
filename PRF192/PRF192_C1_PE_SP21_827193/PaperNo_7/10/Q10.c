#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int check(char str[]){
	int n=strlen(str);
	int i;
	for(i=0;i<n;i++){
		if(str[i]!=str[n-1-i])
			return 0;
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int a[7];
int i;
for(i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
if(check(a)==1){
	printf("%d",a[i]);
}



  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
