#include<stdio.h>

int usAl(int sayi, int us)
{
	int sonuc=1;
	for(int i=0;i<us;i++)
	{
		sonuc=sonuc*sayi;
	}
	return sonuc;
}
int main()
{
	int sayi, us,sonuc;
	printf("Sayiyi girin:");
	scanf("%d",&sayi);
	printf("Alinacak us sayisini girin:");
	scanf("%d",&us);
	sonuc=usAl(sayi,us);
	printf("%d^%d=%d",sayi,us,sonuc);
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
	int sayilar[5]={89,74,16,98,41};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",sayilar[i]);
	}
	
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
	int sayilar[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("%d.sayiyi girin:",(i+1));
		scanf("%d",&sayilar[i]);
	}
	printf("\nGirdiginiz degerler\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d. sayi : %d\n",(i+1),sayilar[i]);
	}
	
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
	float notlar[10];
	float toplam=0,ortalama;
	int ortalamadanBuyuk=0, ortalamadanKucuk=0;
	
	for(int i=0;i<10;i++)
	{
		printf("%d. notu girin:",(i+1));
		scanf("%f",&notlar[i]);
		toplam+=notlar[i];
	}
	ortalama=toplam/10.0;
	for(int i=0;i<10;i++)
	{
		if(notlar[i]<ortalama)
		{
			ortalamadanKucuk++;
		}
		else if(notlar[i]>ortalama)
		{
			ortalamadanBuyuk++;
		}		
	}
	printf("Ortalama: %.2f\n",ortalama);
	printf("Ortalamadan kucuk olan sayilarin adedi:%d\n",ortalamadanKucuk);
	printf("Ortalamadan buyuk olan sayilarin adedi:%d\n",ortalamadanBuyuk);
	
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
	int aylar[12];
	int toplam=0, i;
	for(i=0;i<12;i++)
	{
		printf("%d.aydaki calisma gunu:",(i+1));
		scanf("%d",&aylar[i]);
	}
	for(i=0;i<12;i++)
	{
		printf("%d.ay icin %d gun calistiniz\n",(i+1),aylar[i]);
		toplam+=aylar[i];
	}
	printf("Toplam calisma gun sayisi:%d\n",toplam);
	return 0;
}
	