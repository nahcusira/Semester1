#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
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
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n;
scanf("%d",&n);

  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
if(nt(n)==1){
	printf("%d is a prime number",n);
}
else{
	printf("%d is not a prime number",n);
}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
