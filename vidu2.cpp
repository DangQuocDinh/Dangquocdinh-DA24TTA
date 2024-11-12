#include <stdio.h>

int main()
{
	//Khao bao bien
	int a,b;
	
	//Nhap gia tri cho bien
	printf("\nNhap so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("\nNhap so nguyen thu hai: ");
	scanf("%d",&b);
	
	//Xu ly va xuat ket qua
	if (a<b)
	{
		printf("\nKet qua: So be la %d",a);
	}
	else 
	{
		printf("\nKet qua: So be la %d\n",b);
	}
	return 0;

}



