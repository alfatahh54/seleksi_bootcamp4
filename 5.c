#include<stdio.h>
int buyNoodle(int x,int y)
{
	if (x%2==1)
	{
		if (x%5==0)
		{
			if (((y/2500)/3)%2==0)
				return ((y/2500)/3)*10+y/2500;
			else
				return ((y/2500)/3)*5+y/2500;
		}
		else
			return +(y/2500)/3+y/2500;
	}
	else
	{
		if (x%5==0)
		{
			if (((y/2500)/4)%2==0)
				return (y/2500/4)*10+y/2500;
			else
				return ((y/2500)/4)*5+y/2500;
		}
		else
			return (y/2500)/4+y/2500;
	}
}

int main ()
{
	int tanggal, uang;
	printf("tanggal beli: ");
	scanf("%d", &tanggal);
	printf("jumlah uang: ");
	scanf("%d", &uang);
	printf("total mie yang diperoleh: %d", buyNoodle(tanggal,uang));
	return 0;
}