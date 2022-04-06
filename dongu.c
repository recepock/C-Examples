#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("Bilisim Sistemleri\n");
		i++;
	}
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main()
{
	int i = 1, toplam = 0, sayi, ortalama;
	while (i <= 5)
	{
		printf("%d.sayiyi girin:", i);
		scanf("%d", &sayi);
		toplam = toplam + sayi;
		i++;
	}
	ortalama = toplam / 5;
	printf("Toplamin sonucu:%d\nOrtalama:%d", toplam, ortalama);

	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main()
{
	int i = 1, toplam = 0, sayi;
	printf("Kaca kadar gitmek istiyorsunuz:");
	scanf("%d", &sayi);
	while (i <= sayi)
	{
		printf("%d\n", i);
		toplam = toplam + i;
		i++;
	}
	printf("Toplamin sonucu:%d", toplam);
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main()
{
	int sayi, pozitifAdet = 0, negatifAdet = 0;
	do
	{
		printf("Pozitif ve negatif sayilari girin (Cikis icin 0'a basin'):");
		scanf("%d", &sayi);
		if (sayi > 0)
		{
			pozitifAdet++;
		}
		else if (sayi < 0)
		{
			negatifAdet++;
		}
	} while (sayi != 0);
	printf("Girdiginiz sayilardan %d pozitif ve %d negatiftir\n", pozitifAdet, negatifAdet);

	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main()
{
	int sayi, pozitifAdet = 0, negatifAdet = 0;
	do
	{
		printf("Pozitif ve negatif sayilari girin (Cikis icin 0'a basin'):");
		scanf("%d", &sayi);
		if (sayi > 0)
		{
			pozitifAdet++;
		}
		else if (sayi < 0)
		{
			negatifAdet++;
		}
	} while (sayi != 0);
	printf("Girdiginiz sayilardan %d pozitif ve %d negatiftir\n", pozitifAdet, negatifAdet);

	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main()
{
	printf("***********************************************************\n");
	printf("-1 Girilinceye kadar klavyden girilen islemi yapan program\n");
	printf("***********************************************************\n");

	int sayi1, sayi2, sonuc = 0, secim = 0;
	printf("1.sayiyi girin:");
	scanf("%d", &sayi1);
	printf("2.sayiyi girin:");
	scanf("%d", &sayi2);

	while (secim != -1)
	{
		printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n-1Cikis\nSeciminiz:");
		scanf("%d", &secim);

		if (secim == 1)
		{
			sonuc = sayi1 + sayi2;
			printf("Toplamin sonucu:%d\n", sonuc);
		}
		else if (secim == 2)
		{
			sonuc = sayi1 - sayi2;
			printf("Cikarmanin sonucu:%d\n", sonuc);
		}
		else if (secim == 3)
		{
			sonuc = sayi1 * sayi2;
			printf("Carpmanin sonucu:%d\n", sonuc);
		}
		else if (secim == 4)
		{
			sonuc = sayi1 / sayi2;
			printf("Bolmenin sonucu:%d\n", sonuc);
		}
	}
	return 0;
}
