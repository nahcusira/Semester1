#include<stdlib.h>
#include<math.h>
#include<string.h>
int main() {
	int n=100,i,count=0,sum;
	for (i=1; i<=n; i++)
		if(i%3==0)
			count++;
	for (i=0; i<=n; i++)
		if (i%3==0)
			sum=sum+i;
	printf("\ncac so chia het cho 3 tu 1->100:%d",count);
	printf("\ntong cac so chia het cho 3 tu 1->100 la:%d",sum);
	return 0;
}
