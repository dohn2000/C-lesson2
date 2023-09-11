#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//Bài 1: Nh?p vào chi?u dài và chi?u rông c?a hình ch? nh?t => In ra di?n tích hình ch? nh?t và chu vi hình ch? nh?t
	int a,b,p,s;
	printf("nhap chieu dai hinh chu nhat: \n");
	scanf("%d",&a);
	printf("nhap chieu rong hinh chu nhat: \n");
	scanf("%d",&b);
	s=a*b;
	p=(a+b)*2;
	printf("dien tich hinh chu nhat: %d\n",s);
	printf("chu vi hinh chu nhat: %d\n",p);
	//Bài 2: Nh?p vào bán hình hình tròn => In ra chu vi và di?n tích hình tròn
	int r,p1,s1;
	float Pi;
	Pi=3.14;
	printf("nhap vao ban kinh hinh tron\n");
	scanf("%d",&r);
	p1=2*Pi*r;
	s1=Pi*r*r;
	printf("chu vi hinh tron:%d\n",p1);
	printf("dien tich hinh tron:%d\n",s1);
	//Bài 3: Nh?p vào s? nguyên N => In ra t?ng các s? t? 1 t?i N
	int n,t;
	printf("nhap so nguyen n:\n");
	scanf("%d",&n);
	t=n*(n-1)/2;
	printf("tong cac so tu 1 den n: %d\n",t);
	
	return 0;
}
	
	
	
