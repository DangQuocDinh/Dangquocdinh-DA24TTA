#include <stdio.h>

int main()
{
	int hour;
	printf("nhap gio(<=24): ");
	scanf("%d",&hour);

	
	if (hour < 18 )
	{
		printf("HAVE A GOOD DAY :)<3");
	}
	else 
	{
		printf("HAVE A GOOD NIGHT :)<3 ");
	}
	return 0;
}
