#include <stdio.h>

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		printf("Yonetim Bilisim Sistemleri\n");
	}

	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
	int i;
	for (i = 1; i <= 50; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}
int i;
for (i = 0; i <= 50; i = i + 2)
{
	printf("%d\n", i);
}

return 0;

int toplam = 0;
for (int i = 1; i <= 15; i++)
{
	toplam = toplam + i;
}
printf("Toplamin degeri:%d", toplam);
/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
	int toplam = 0, sayi;
	for (int i = 1; i <= 10; i++)
	{
		printf("%d.sayiyi girin:", i);
		scanf("%d", &sayi);
		toplam = toplam + sayi;
	}
	printf("Sayilarin toplami:%d\n", toplam);
	printf("Sayilarin ortalamasi:%d", toplam / 10);

	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
	int m, n;
	printf("Yazdirmak istediginiz sayilarin baslangicini yazin:");
	scanf("%d", &m);
	printf("Yazdirmak istediginiz sayilarin bitisini yazin:");
	scanf("%d", &n);
	for (int i = m; i <= n; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int main()
{
	int sonuc, secim;

	printf("Kaç saat kullandınız:");
	scanf("%d", &secim);
	if (secim <= 29)
	{
		for (int i = 1; i <= secim; i++)
		{
			if (i == 1)
			{
			}
		}
		sonuc = 15;
		printf("Odemeniz gereken miktar:%d\n", sonuc);
	}
	else if (secim <= 89)
	{
		sonuc = 25;
		printf("Odemeniz gereken miktar:%d\n", sonuc);
	}
	else if (secim <= 149)
	{
		sonuc = 66;
		printf("Odemeniz gereken miktar:%d\n", sonuc);
	}
	else if (secim <= 299)
	{
		sonuc = 75;
		printf("Odemeniz gereken miktar:%d\n", sonuc);
	}
	else if (secim >= 300)
	{
		sonuc = 84;
		printf("Odemeniz gereken miktar:%d\n", sonuc);
	}
	return 0;
}