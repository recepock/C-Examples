#include <stdio.h>

int main()
{
	int saat;
	printf("Kac saat kaldiniz:");
	scanf("%d",&saat);
	if(saat<=4)
	{
		printf("10 TL odeme yapin");
	}
	else if(saat<=8)
	{
		printf("12 TL odeme yapin");
	}
	else if(saat<=12)
	{
		printf("15 TL odeme yapin");
	}
	else if(saat>=13)
	{
		printf("20 TL odeme yapin");
	}
	else 
	{	printf("Yanlis saat girdiniz");
	}

	return 0;
}
#include <stdio.h>

int main()
{
	float harcama,odenecek;
	printf("Harcama miktarını girin:");
	scanf("%f",&harcama);
	if(harcama<1000)
	{
		printf("Indırım yok. Odenecek miktar:%f",harcama);
	}
	else if(harcama<2000)
	{
		odenecek=harcama-(harcama*10)/100;
		printf("Indirim yuzde 10. Odenecek miktar:%f",odenecek);
	}
	else if(harcama<3000)
	{
		odenecek=harcama-(harcama*15)/100;
		printf("Indirim yuzde 15. Odenecek miktar:%f",odenecek);
	}
	else
	{
		odenecek=harcama-(harcama*20)/100;
		printf("Indirim yuzde 20. Odenecek miktar:%f",odenecek);
	}

	return 0;
}
#include <stdio.h>

int main()

{
	int sicaklik;
	printf("Sicaklik degerini girin:");
	scanf("%d",&sicaklik);
	if(sicaklik<0)
	{
		printf("Donmus hava");
	}
	else if(sicaklik<10)
	{
		printf("Cok soguk hava");
	}
	else if(sicaklik<20)
	{
		printf("Soguk hava");
	}
	else if(sicaklik<30)
	{
		printf("Sicaklikta normal");
	}
	else if(sicaklik<40)
	{
		printf("Sicak hava");
	}
	else
	{
		printf("Cok sicak hava");
	}

	return 0;
}






























