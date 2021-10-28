#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int t,n;
	printf("\nenter thang:");
	scanf("%d",&t);
	printf("\nenter nam:");
	scanf("%d",&n);
	switch (t)
	{
		case 1: printf("\n31days");break;
		case 3: printf("\n31days");break;
		case 5: printf("\n31days");break;
		case 7: printf("\n31days");break;
		case 8: printf("\n31days");break;
		case 10: printf("\n31days");break;
		case 12: printf("\n31days");break;
		
		case 4: printf("\n30days");break;
		case 6: printf("\n30days");break;
		case 9: printf("\n30days");break;
		case 11: printf("\n30days");break;
		case 2:
			if (n%4==0||n%100==0||n%400==0)
				printf("\n29days");
			else 
				printf("\n28days");
				break;
		default:printf("\nchi co 12 thang");break;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
