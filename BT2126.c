#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//B�i 1: Nh?p v�o chi?u d�i v� chi?u r�ng c?a h�nh ch? nh?t => In ra di?n t�ch h�nh ch? nh?t v� chu vi h�nh ch? nh?t
	int a,b,p,s;
	printf("nhap chieu dai hinh chu nhat: \n");
	scanf("%d",&a);
	printf("nhap chieu rong hinh chu nhat: \n");
	scanf("%d",&b);
	s=a*b;
	p=(a+b)*2;
	printf("dien tich hinh chu nhat: %d\n",s);
	printf("chu vi hinh chu nhat: %d\n",p);
	//B�i 2: Nh?p v�o b�n h�nh h�nh tr�n => In ra chu vi v� di?n t�ch h�nh tr�n
	int r,p1,s1;
	float Pi;
	Pi=3.14;
	printf("nhap vao ban kinh hinh tron\n");
	scanf("%d",&r);
	p1=2*Pi*r;
	s1=Pi*r*r;
	printf("chu vi hinh tron:%d\n",p1);
	printf("dien tich hinh tron:%d\n",s1);
	//B�i 3: Nh?p v�o s? nguy�n N => In ra t?ng c�c s? t? 1 t?i N
	int n,t;
	printf("nhap so nguyen n:\n");
	scanf("%d",&n);
	t=n*(n-1)/2;
	printf("tong cac so tu 1 den n: %d\n",t);
	
	return 0;
}
	
	
	
