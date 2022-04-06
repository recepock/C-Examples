// Klavyeden girilen sayının küpünü alan program

int main()
{

	int sayı, kupu;

	printf("sayıyı giriniz:");
	scanf("%d", &sayı);

	kupu = sayı * sayı * sayı;

	printf("kupu:%d\n", kupu);

	return 0;
}

// Kullanıcıdan iki sayı alıp bu sayılar dahil olmak üzere girilen sayılar arasındaki sayıları toplama

int main()
{

	int toplam = 0, m, n;
	printf("Yazdirmak istediginiz sayilarin baslangicini yazin:");
	scanf("%d", &m);
	printf("Yazdirmak istediginiz sayilarin bitisini yazin:");
	scanf("%d", &n);
	for (int i = m; i <= n; i++)
	{
		toplam = toplam + i;
	}
	printf("Toplamin degeri:%d\n", toplam);

	return 0;
}

// 20 öğrencinin vize ve final notlarını isteyip her birinin not ortalamalarını bulma

int main()
{
	int vize, final, ortalama = 0;
	for (int i = 1; i <= 20; i++)
	{
		printf("%d.öğrencinin vize notunu girin:", i);
		scanf("%d", &vize);
		printf("%d.öğreninin final notunu girin:", i);
		scanf("%d", &final);

		ortalama = (vize + final) / 2;
		printf("ortalamanız:%d\n", ortalama);
	}

	return 0;
}

// 0+5+10+15+20+……..+185 dizisinin toplamını bulma

int main()
{
	int i, toplam = 0;
	for (i = 0; i <= 185; i = i + 5)
	{
		toplam = toplam + i;
	}
	printf("Toplamin degeri:%d", toplam);
	return 0;
}

/* X havayolu şirketi bagaj kuralları çerçevesinde, yurtdışı promosyon sınıfı uçuşlarda normal 20 kg bagaj hakkı sunuyor.
El Bagajı için ise 8 kg bagaj hakkı sunuyor. Bagaj haklarını geçmeyen yolcular herhangi bir ücret ödememektedir.
Eğer yolcu normal bagajı geçerse kg başına 8 TL ve normal bagaj hakkını geçerse 5TL ücret almaktadır.
Buna göre yolcunun ödemesi gereken fiyatı hesaplayan program */

int main()
{
	int normalbagajkilosu = 0, normalbagajsayısı, kilo_için_odenecek_tutar = 0, sayı_için_odenecek_tutar = 0;

	printf("normal bagajinizin kilosunu griniz:");
	scanf("%d", &normalbagajkilosu);

	printf("normal bagaj sayinizi giriniz:");
	scanf("%d", &normalbagajsayısı);

	if (normalbagajkilosu >= 20)
	{
		for (int i = 1; i <= normalbagajkilosu; i++)
		{
			kilo_için_odenecek_tutar = (normalbagajkilosu - 20) * 8;
		}
	}
	if (normalbagajsayısı >= 2)
	{
		for (int i = 1; i <= normalbagajsayısı; i++)
		{
			sayı_için_odenecek_tutar = (normalbagajsayısı - 1) * 5;
		}
	}
	printf("bagaj kilosu için ödemeniz gereken miktar:%d₺\n", kilo_için_odenecek_tutar);
	printf("bagaj sayısı için ödemeniz gereken miktar:%d₺\n", sayı_için_odenecek_tutar);
	printf("Toplam ödemeniz gereken miktar:%d₺\n", sayı_için_odenecek_tutar + kilo_için_odenecek_tutar);
	return 0;
}
/* Aşağıdaki programda kullanıcıdan seçenekleri isteyin. Kullanıcının seçtiği kitaplara göre ödemesi gereken fiyatı yazan kod yazınız.
1-Kürk Mantolu Madonna = 7.5 TL
2-Malcolm X = 15.4 TL
3-Köle Olmayacağız = 13.4 TL */
int main()
{
	int secim;

	printf("1-Kürk Mantolu Madonna 7.5 TL\n  2-Malcolm X 15.4 TL\n 3-Köle Olmayacağız 13.4 TL\n Almak istediğiniz kitabın numarasını girin:");
	scanf("%d", &secim);
	if (secim == 1)
	{

		printf("Kürk Mantolu Madonna Kitabını Aldınız. Ödemeniz gereken tutar 7.5 TL\n");
	}
	else if (secim == 2)
	{

		printf("Malcom X Kitabını Aldınız. Ödemeniz gereken tutar 15.4 TL\n");
	}
	else if (secim == 3)
	{

		printf("Köle Olmayacağız Kitabını Aldınız. Ödemeniz gereken tutar 13.4 TL\n");
	}
	else
	{
		printf("Yanlis secim yaptiniz\n");
	}
	return 0;
}
/*Bir Internet Servis Sağlayıcı şirketi, müşterilerinin kullanım saatine göre fiyatlandırma yapmaktadır.
Kullanıcıdan kaç saat kullandığını isteyin. Buna göre müşterinin ödemesi gereken miktarı bulun.

300 saat ve üstü	84 TL+ 300 saatin üstündeki her bir saat için 5 TL.
150-299				75 TL+150 saatin üstündeki her bir saat için 3 TL.
90-149				66 TL+90 saatin üstündeki her bir saat için 2 TL
30-89				25 TL+30 saatin üstündeki her bir saat için 1 TL
0-29				15 TL
*/
int main()
{

	int Saat = 0, odenecekTutar = 0;
	printf("Kaç saat kullandığınızı giriniz :");
	scanf("%d", &Saat);
	if (Saat > 1)
	{
		for (int i = 1; i <= Saat; i++)
		{
			if (i == 1)
			{
				if (Saat <= 29)
				{
					odenecekTutar = i * 15;
				}
				else if (Saat <= 89)
				{
					odenecekTutar = i * 25;
				}
				else if (Saat <= 149)
				{
					odenecekTutar = i * 66;
				}
				else if (Saat <= 299)
				{
					odenecekTutar = i * 75;
				}
				else if (Saat >= 300)
				{
					odenecekTutar = i * 84;
				}
			}
			else
			{

				Saat = Saat;
				if (Saat < 90)
				{
					odenecekTutar = ((Saat * 1) - 30) + 25;
				}
				else if (Saat < 150)
				{
					odenecekTutar = ((Saat * 2) - 180) + 66;
				}
				else if (Saat < 300)
				{
					odenecekTutar = ((Saat * 3) - 450) + 75;
				}
				else if (Saat > 300)
				{
					odenecekTutar = ((Saat * 5) - 1500) + 84;
				}
			}
		}
	}

	printf("Odenecek Tutar:%d\n", odenecekTutar);
	return 0;
}
