#include<stdio.h>
#include<math.h>
int main() {
	int n,k,x,y,z;
	printf("\nenter n:");
	scanf("%d",&n);
	int gtn=1,gtk=1,hgt=1;
	printf("\n enter k:");
	scanf("%d",&k);
	for(x=1; x<=n; x++)
		gtn=gtn*x;
	for(y=1; y<=k; y++)
		gtk=gtk*y;
	for(z=1; z<=(n-k); z++)
		hgt=hgt*z;
	printf("\nchinh hop chap k cua n=%f",(float)gtn/(gtk*hgt));
	return 0;
}
