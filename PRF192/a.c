#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
function lesson1(n) {
    int s=0;
    int i;
    for(i=1;i<=n;i++){
        s+=i;
    }
    return n;
}
int main() {
	
	scanf("%d",&n);
	printf("%d",lesson1(n));
	return 0;
}
