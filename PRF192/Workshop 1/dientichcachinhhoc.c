#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	printf("\nmenu:");
	printf("\n1.tinh dien tich hinh vuong");
	printf("\n2.tinh dien tich hinh chu nhat");
	printf("\n3.tinh dien tich tam giac");
	printf("\n4.tinh dien tich hinh thang");
	printf("\n5.tinh dien tich hinh tron");
	printf("\nchoose an option:");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			{
				int a;
				printf("\nenter a:");
				scanf("%d",&a);
				printf("\ndien tich hinh vuong la:%d",a*a);break;
			}
		case 2:
			{
				int a,b;
				printf("\nenter a:");
				scanf("%d",&a);
				printf("\nenter b:");
				scanf("%d",&b);
				printf("\ndien tich hinh chu nhat la:%d",a*b);break;	
			}
		case 3:
			{
				int a,b,c;
				printf("\nenter a:");
				scanf("%d",&a);
				printf("\nenter b:");
				scanf("%d",&b);
				printf("\nenter c:");
				scanf("%d",&c);
				int p=(float)(a+b+c)/2;
			    if((a + b <= c) || (a + c <= b) || (b + c <= a))
    			{
        			printf("\ndien tich tam giac la:%f",(float)a,b,c,p,(float)sqrt(p*(p-a)*(p-b)*(p-c)));
    			}
    			else
    			{
        			printf("\nday k phai 3 canh tam giac");break;
    			}
			}
		case 4:
			{
				int a,b,h;
				printf("\nenter a:");
				scanf("%f",&a);
				printf("\nenter b:");
				scanf("%f",&b);
				printf("\nenter h:");
				scanf("%f",&h);
				printf("\ndien tich hinh thang la:%f",(float)h*((a+b)/2));break;
			}
		case 5:
			{
				int r;
				printf("\nenter r:");
				scanf("%f",&r);
				printf("\ndien tich hinh tron la:%f",(float)r*r*3.14);break;
			}
		default:printf("\nchi chon 1->5");break;	
			
	}

return 0;
}
