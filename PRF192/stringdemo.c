#include <stdio.h>
#include <string.h>
int main()
{
	//khai bao chuoi ki tu
	char str[100];
	// char str1[] = "fpt university!";
	// char str2[] = {'i', ' ', 'l', 'o', 'v', 'e', ' ', 'y', 'o', 'u', '!', '\0'};
	// //hien chuoi ra man hinh
	// printf("\nstr1:");
	// int i;
	// for (i = 0; i < strlen(str1); i++) //strlen la so ki tu trong chuoi
	// 	printf("%c", str1[i]);
	// printf("\nstr2:%s", str2);

	//nhap chuoi tu ban phim
	printf("\nenter str:");
	gets(str); //co the su dung <=> scanf ( tham khao trong slide)
	// printf("\nstr:");
	// puts(str); //hien chuoi vua nhap (str)
	//sao chep 1 chuoi
	//c1: duyet mang de sao chep
	// char str3[strlen(str) + 1];
	// int j = 0;
	// for (i = 0; i < strlen(str); i++)
	// {
	// 	str3[j] = str[i];
	// 	j++;
	// }
	// str3[j] = '\0';
	// printf("\nstr3:%s", str3);
	// //c2: su dung ham strcpy
	// char str4[strlen(str) + 1];
	// strcpy(str4, str);
	// printf("\nstr4:%s", str4);
	//coi str la chuoi ho ten cua minh
	//ex: str: nguyen van a
	//lay ra ho, ten, ten dem cua minh
	/*
	ho: nguyen
	ten dem: van
	ten: a
	*/
	char ho[strlen(str) + 1];
	int j = 0,i=0;
	int start;
	for (i = 0; str[i] != ' '; i++)
	{
		start = i;
		ho[j] = str[i];
		j++;
	}
	ho[j] = '\0';
	printf("\nho:%s", ho);
	char ten[strlen(str) + 1];
	j = 0;
	int end;
	//tim vi tri dau cach cuoi cung
	for (i = strlen(str) - 1; str[i] != ' '; i--)
		end = i;
	//sao chep chuoi str tu vi tri end
	for (i = end; i < strlen(str); i++)
	{
		ten[j] = str[i];
		j++;
	}
	ten[j] = '\0';
	printf("\nten:%s", ten);

	char tendem[strlen(str) + 1];
	j = 0;
	for (i = start + 2; i < end; i++)
	{
		tendem[j] = str[i];
		j++;
	}
	tendem[j] = '\0';
	printf("\nten dem:%s", tendem);

	//coi str chua 1 chuoi:
	//khong de dau cach thua o dau va cuoi
	//giua cac tu trong chuoi chi co 1 dau cach
	//(?)--> kiem tra xem chuoi co bao nhieu tu
	//va tu nao co chieu dai lon nhat
	int count = 0, max = 0; //bat dau dem ki tu
	int ok = 1;
	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == ' ' || i == strlen(str))
		{
			ok = 0;
		}
		else
		{
			ok = 1;
		}
		if (ok == 1)
		{
			count++;
		}
		else
		{
			if (max < count)
			{
				max = count;
			}
			count = 0;
		}
	}
	printf("\nnhung tu max=%d", max);
	ok = 1;
	char tu[strlen(str)];
	j = 0;
	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == ' ' || i == strlen(str))
		{
			tu[j] = '\0';
			ok = 0;
		}
		else
			ok = 1;
		if (ok == 1)
			tu[j++] = str[i];
		else
		{
			if (strlen(tu) == max)
				printf("\n%s", tu);
			j = 0;
		}
	}

	return 0;
}
