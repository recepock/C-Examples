#include <stdio.h>
int sayi1, sayi2;
void menu()
{
	printf("\n Islem menusu");
	printf("\n Toplama (1)");
	printf("\n Cikarma (2)");
	printf("\n Carpma  (3)");
	printf("\n Bolme   (4)");
	printf("\n Cikis   (-1)");
	printf("\n\nSeciminiz:");
}

void sayiAl()
{
	printf("1. sayiyi girin:");
	scanf("%d", &sayi1);
	printf("2. sayiyi girin:");
	scanf("%d", &sayi2);
}

int islemYap(int islem)
{
	int sonuc;
	switch (islem)
	{
	case 1:
		sonuc = sayi1 + sayi2;
		break;
	case 2:
		sonuc = sayi1 - sayi2;
		break;
	case 3:
		sonuc = sayi1 * sayi2;
		break;
	case 4:
		sonuc = sayi1 / sayi2;
	}
	return sonuc;
}

void sonucGoster(int sec, int son)
{
	switch (sec)
	{
	case 1:
		printf("\n %d+%d=%d", sayi1, sayi2, son);
		break;
	case 2:
		printf("\n %d-%d=%d", sayi1, sayi2, son);
		break;
	case 3:
		printf("\n %d*%d=%d", sayi1, sayi2, son);
		break;
	case 4:
		printf("\n %d/%d=%d", sayi1, sayi2, son);
	}
}

int main()
{
	int sonuc, secim;
	menu();
	scanf("%d", &secim);
	while (secim != -1)
	{
		sayiAl();
		sonuc = islemYap(secim);
		sonucGoster(secim, sonuc);

		menu();
		scanf("%d", &secim);
	}

	return 0;
}