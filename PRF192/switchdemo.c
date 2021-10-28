#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	printf("\nenter n:");
	scanf("%d", &n);
	if (n == 1)
	{
		printf("\none");
	}
	if (n == 2)
	{
		printf("\ntwo");
	}
	if (n == 3)
	{
		printf("\nthree");
	}
	if (n == 4)
	{
		printf("\nfour");
	}
	if (n == 5)
	{
		printf("\nfive");
	}
	if (n == 6)
	{
		printf("\nsix");
	}
	if (n == 7)
	{
		printf("\nseven");
	}
	if (n == 8)
	{
		printf("\neight");
	}
	if (n == 9)
	{
		printf("\nnine");
	}
	if (n == 10)
	{
		printf("\nten");
	}

	switch (n)
	{
	case 1:
		printf("\none");
		break;
	case 2:
		printf("\ntwo");
		break;
	case 3:
		printf("\nthree");
		break;
	case 4:
		printf("\nfour");
		break;
	case 5:
		printf("\nfive");
		break;
	case 6:
		printf("\nsix");
		break;
	case 7:
		printf("\nseven");
		break;
	case 8:
		printf("\neight");
		break;
	case 9:
		printf("\nnine");
		break;
	case 10:
		printf("\nten");
		break;
	default:
		printf("\nchua day");
		break;
	}

	int a, b;
	printf("\nenter a:");
	scanf("%d", &a);
	printf("\nenter b:");
	scanf("%d", &b);
	//tao menu
	printf("menu:");
	printf("\n1.tong");
	printf("\n2.hieu");
	printf("\n3.tich");
	printf("\n4.thuong");
	printf("\n5.du");
	printf("\nchoose an option:");
	int option;
	scanf("%d", &option);
	switch (option)
	{
	case 1:
	{
		//tong
		printf("\na+b=%d", a + b);
		break;
	}
	case 2:
	{
		//hieu
		printf("\na-b=%d", a - b);
		break;
	}
	case 3:
	{
		//tich
		printf("\na*b=%d", a * b);
		break;
	}
	case 4:
	{
		//thuong
		printf("\na/b=%f", (float)a / b);
		break;
	}
	case 5:
	{
		//du
		printf("\na%%b=%d", a % b);
		break;
	}

	default:
		printf("\nchi chon 1->5");
		break;
	}
	//coi n la diem thi
	//su dung switch de xep loai hoc luc
	//1.diem<4: kem
	//2.4<=diem<5: yeu
	//3.5<=diem<7: trung binh
	//4.7<=diem<8: kha
	//5.8<=diem<9: gioi
	//6.diem>=9: xuat sac
	switch (n)
	{
	case 1:
	case 2:
	case 3:
	{
		printf("\nkem");
		break;
	}
	case 4:
	case 5:
	case 6:
	{
		printf("\nyeu");
		break;
	}
	case 7:
	case 8:
	{
		printf("\ntrung binh");
		break;
	}
	case 9:
	{
		printf("\nkha");
		break;
	}
	case 10:
	{
		printf("\ngioi");
		break;
	}

	default:
		printf("\nkhong co diem >10");
		break;
	}

	return 0;
}
