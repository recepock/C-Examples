#include <stdio.h>

int main()
{
	int saat;
	float ucret, toplam_ucret;
	printf("Saati girin:");
	scanf("%d",&saat);
	printf("Ücreti girin:");
	scanf("%f",&ucret);
	toplam_ucret=ucret*saat;
	printf("Toplam ücret:%f",toplam_ucret);
		
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int main()
{
	int uzun,kisa,cevre,alan;
	printf("Uzun kenari girin:");
	scanf("%d",&uzun);
	printf("Kisa kenari girin:");
	scanf("%d",&kisa);
	cevre=2*(uzun+kisa);
	alan=uzun*kisa;
	printf("Alan:%d\nCevre:%d\n",alan,cevre);
		
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int main()
{
	float pi=3.14,alan,cevre;
	int yaricap;
	printf("Yaricapi girin:");
	scanf("%d",&yaricap);
	cevre=2*pi*yaricap*yaricap;
	alan=pi*yaricap*yaricap;
	printf("Cevre:%f\nAlan:%f\n",cevre,alan);	
		
	return 0;
}

if(koşul)
{
  kodlar;
}
else
{
  kodlar;
}

/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
	int a=50,b=100;
	if(a>b)
	{
		printf("a:%d sayisi buyuktur",a);	
	}	
	else
	{
		printf("b:%d sayisi buyuktur",b);
	}
		
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
	int vize,final;
	float ortalama;
	printf("Vize notunu girin:");
	scanf("%d",&vize);
	printf("Final notunu girin:");
	scanf("%d",&final);
	ortalama=(vize+final)/2;
	if(ortalama>=60)
	{
		printf("%f ortalama ile gectiniz",ortalama);
	}
	else
	{
		printf("%f ortalama ile kaldiniz",ortalama);
	}
		
	return 0;
}



































