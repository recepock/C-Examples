#include <stdio.h>

int main()
{

	int yas;
	printf("Yasinizi girin:");
	scanf("%d",&yas);
	if(yas>=18)
	{
		printf("Oy kullanabilirsiniz");
	}
	else
	{
		printf("Oy kullanamazsınız");
	}
	
	return 0;
}
#include <stdio.h>

int main()
{
	int sayi1,sayi2,sonuc,secim;
	printf("1.sayiyi girin:");
	scanf("%d",&sayi1);
	printf("2.sayiyi girin:");
	scanf("%d",&sayi2);
	printf("1-Toplama 2-Cikarma 3-Carpma 4-Bolme:");
	scanf("%d",&secim);
	if(secim==1)
	{
		sonuc=sayi1+sayi2;
		printf("Toplamanin sonucu:%d",sonuc);
	}
	else if(secim==2)
	{
		sonuc=sayi1-sayi2;
		printf("Cikarmanın sonucu:%d",sonuc);
	}
	else if(secim==3)
	{
		sonuc=sayi1*sayi2;
		printf("Carpmanin sonucu:%d",sonuc);
	}
	else if(secim==4)
	{
		sonuc=sayi1/sayi2;
		printf("Bolmenin sonucu:%d",sonuc);
	}
	else
	{
		printf("Yanlis tercih yaptiniz!!!");
	}
	
	return 0;
}

/*-----------------------------------------------------------------------------*/
#include <stdio.h>

int main()
{
			 /*0-59-F
             * 60-64-C-
             * 65-69-C
             * 70-74-C+
             * 75-79-B-
             * 80-84-B
             * 85-89-B+
             * 90-94-A-
             * 95-100-A
             */
	float vize,final,ortalama;
	printf("Vize notunu girin:");
	scanf("%f",&vize);
	printf("Final notunu girin:");
	scanf("%f",&final);
	ortalama=vize*0.2+final*0.8;
	if(ortalama<=59)
	{
		printf("%f ->F",ortalama);	
	}
	else if(ortalama<=64)
	{
		printf("%f ->C-",ortalama);
	}
	else if(ortalama<=69)
	{
		printf("%f ->C",ortalama);
	}
	else if(ortalama<=74)
	{
		printf("%f ->C+",ortalama);
	}
	else if(ortalama<=79)
	{
		printf("%f ->B-",ortalama);
	}
	else if(ortalama<=84)
	{
		printf("%f ->B",ortalama);
	}
	else if(ortalama<=89)
	{
		printf("%f -B+",ortalama);
	}
	else if(ortalama<=94)
	{
		printf("%f -A-",ortalama);
	}
	else if(ortalama<=100)
	{
		printf("%f -A",ortalama);
	}
	else 
	{
		printf("%f Yanlış ortalama",ortalama);
	}
	
	return 0;
}




