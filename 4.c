#include<stdio.h>
int fibo(int x)
{
	if (x==0||x==1)
		return x;
	else
		return fibo(x-2)+fibo(x-1);
}

int main ()
{
	int kolom, baris;
	printf("Program menampilkan bilangan fibonacci dalam bentuk matriks\n\n");
	printf("masukkan jumlah kolom: ");
	scanf("%d",&kolom);
	printf("masukkan jumlah baris: ");
	scanf("%d",&baris);
	for (int i=0;i<baris;i++)
	{
		for (int j=0;j<kolom;j++)
			printf("%d, ", fibo(i+j+i*(kolom-1)));
		printf("\n");

	}
	return 0;
}