#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{	
	int a,b;
	printf("\nenter a:");
	scanf("%d",&a);
	printf("\nenter b:");
	scanf("%d",&b);
	printf("menu:");
	printf("\n1.tong");
	printf("\n2.hieu");
	printf("\n3.tich");
	printf("\n4.thuong");
	printf("\n5.du");
	printf("\nchoose an option:");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
				//tong
				printf("\na+b=%d",a+b);break;
			}
		case 2:
			{
				//hieu
				printf("\na-b=%d",a-b);break;
			}
		case 3:
			{
				//tich
				printf("\na*b=%d",a*b);break;
			}
		case 4:
			{
				//thuong
				printf("\na/b=%f",(float)a/b);
				break;
			}
		case 5:
			{
				//du
				printf("\na%%b=%d",a%b);
				break;
			}
	
		default:printf("\nchi chon 1->5");break;
	}
return 0;
}
