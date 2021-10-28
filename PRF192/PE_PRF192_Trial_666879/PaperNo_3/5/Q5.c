#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i;
	scanf("%d",&n);
	char str[n];
	int a[n];
	int j=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		str[j++]=a[i];
	}
	str[j]='\0';
	
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	char str1[n];
	j=0;
	for(i=strlen(str)-1;i>=0;i--)
	{
		str1[j++]=str[i];
	}
	str1[j]='\0';
	
	if(strcmp(str,str1)==0)
		printf("1");
	else printf("0");






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
