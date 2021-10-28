#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[4];
	int i;
	for(i=0;i<4;i++)
	{
		fflush(stdin);
		scanf("%c",&str[i]);
	}
	
	int j;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
			if(str[i]>str[j])
			{
				char tg=str[i];
				str[i]=str[j];
				str[j]=tg;
			}
	}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<4;i++)
	{
		printf("%c ",str[i]);
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
