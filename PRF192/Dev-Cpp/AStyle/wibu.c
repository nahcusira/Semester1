#include <stdio.h>
#include <stdlib.h>

int main() {
	char pass[20];
	do {
		printf("enter password : ");
		gets(pass);
		if(strcmp(pass,"0")==0) {
			exit(0);
		}
	} while(strcmp(pass,"wibu")!=0);
	char file[50];
	printf("enter file name : ");
	gets(file);
	if(access(file,0)==0) {
		FILE *f;
		char ch[50000];
		f = fopen(file,"r");
		fseek(f, SEEK_SET, 0);
		fread(ch, sizeof(ch), 1, f);
		printf("%s",ch);
		fclose(f);
	} else {
		do {
			printf("file not valid");
			printf("\nenter file name again : ");
			gets(file);
			if(strcmp(file,"0")==0) {
				exit(0);
			}
		} while(access(file,0)==-1);
		FILE *f;
		char ch[50000];
		f = fopen(file,"r");
		fseek(f, SEEK_SET, 0);
		fread(ch, sizeof(ch), 1, f);
		printf("%s",ch);
		fclose(f);
	}
	return 0;
}
