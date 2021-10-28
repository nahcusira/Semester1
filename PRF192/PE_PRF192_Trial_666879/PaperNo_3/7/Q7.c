#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[20];
	gets(str);
	
	int start=(strlen(str)-5)/2;
	
	char str1[strlen(str)-2];
  
  	int i,j=0;
  	for(i=start;i<strlen(str)-start;i++)
  	{
  		str1[j++]=str[i];	
	}
	str1[j]='\0';
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	puts(str1);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
