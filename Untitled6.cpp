#include <stdio.h>

int main(int argc, char*argv[])
{
	//Vi?t chuong tr�nh nh?p v�o m?t s? a b?t k? v� in ra gi� tr? a2, a3, a4
	int a;
	int x1,x2,x3;
	printf("Nhap gia tri a =");
	scanf("%d",&a);
	x1= a*a;
	x2= a*a*a;
	x3= a*a*a*a;

	printf("gia tri a^2 =%d\n",x1);
	printf("gia tri a^3 =%d\n",x2);
	printf("gia tri a^4 =%d\n",x3);
	//Vi?t chuong tr�nh d?c t? b�n ph�m 3 s? nguy�n bi?u di?n ng�y, th�ng, nam v� xu?t ra m�n h�nh du?i d?ng �dd/mm/yyyy�.
	int ngay,thang,nam;
	printf("nhap ngay, thang, nam\n");
	scanf("%d", &ngay);
	scanf("%d", &thang);
	scanf("%d", &nam);
	printf("%d/%d/%d\n",ngay, thang,nam);
	//Vi?t chuong tr�nh d?c v� 2 s? th?c v�o in ra k?t qu? c?a ph�p (+), ph�p tr? (-), ph�p nh�n (*), ph�p chia (/).
	int x,y,j,k,l,h;
	printf("nhap hai so nguyen\n");
	scanf("%d", &x);
	scanf("%d", &y);
	j= x+y;
	k= x-y;
	l= x*y;
	h= x/y;
	printf("Phep cong hai so: %d\n",j);
	printf("Phep tru hai so: %d\n",k);
	printf("Phep nhan hai so: %d\n",l);
	printf("Phep chia hai so: %d\n",h);
	
	return 0;
}
