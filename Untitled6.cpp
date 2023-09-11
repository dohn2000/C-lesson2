#include <stdio.h>

int main(int argc, char*argv[])
{
	//Vi?t chuong trình nh?p vào m?t s? a b?t k? và in ra giá tr? a2, a3, a4
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
	//Vi?t chuong trình d?c t? bàn phím 3 s? nguyên bi?u di?n ngày, tháng, nam và xu?t ra màn hình du?i d?ng “dd/mm/yyyy”.
	int ngay,thang,nam;
	printf("nhap ngay, thang, nam\n");
	scanf("%d", &ngay);
	scanf("%d", &thang);
	scanf("%d", &nam);
	printf("%d/%d/%d\n",ngay, thang,nam);
	//Vi?t chuong trình d?c và 2 s? th?c vào in ra k?t qu? c?a phép (+), phép tr? (-), phép nhân (*), phép chia (/).
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
