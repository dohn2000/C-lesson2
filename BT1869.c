#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char rollno[16];
	int age;
	char name[50];
	char address[200];	
	printf("Nhap ma sinh vien\n");
	scanf("%s",&rollno);
	printf("Nhap tuoi \n");
	scanf("%d", &age);
	printf("Nhap ho va ten sinh vien\n");
	scanf("%s", &name);
	printf("Nhap dia chi\n");
	scanf("%s", &address);
	
	printf("=======================================\n");
	printf("|Ten        |Tuoi  | Ma SV    | Dia chi   |\n");
	printf("|%s			|%d	   |%s        |%s         |\n",name, age, rollno, address);
	printf("=======================================\n");
	return 0;
}
