#include<stdio.h>
int count_handshake(int x)
{
	int handshake=0;
	for (int i=1;i<x;i++)
	{
		for (int j=i;j<x;j++)
		{
			handshake++;
		}
	}
	return handshake;
}

int main ()
{
	int number;
	printf("masukkan jumlah tangan: ");
	scanf("%d",&number);
	printf("Jumlah jabat tangan = %d", count_handshake(number));
	return 0;
}