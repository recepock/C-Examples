#include<stdio.h>
int main()
{
	int sayac=0;
	printf("Sayi girin:");
	scanf("%d",&sayac);
	while(sayac!=-1)
	{
		printf("%d\n",sayac);
		sayac--;
	}
				
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
	int gun1,gun2;
	int ay1,ay2;
	int yil1,yil2;
	printf("Ilk tarihi girin (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&gun1,&ay1,&yil1);
	printf("Ikinci tarihi girin (dd/mm/yyyy):");
	scanf("%d/%d/%d",&gun2,&ay2,&yil2);
	if(gun1==gun2 && ay1==ay2 && yil1==yil2)
	{
		printf("Tarihler ayni\n");
	}
	else
	{
		printf("Tarihler farkli\n");
	}
				
	return 0;
}
/*-----------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
	#define INCH_TO_CM 2.54
	#define LITRE_TO_MCUBE 0.001
		
	int secim=0;
	float inch,cm,fahrenheit, celcius,litre,mcube;
	while(secim!=-1)
	{
		printf("1- inch to cm\n");
		printf("2- Fahrenheit to Celcius\n");
		printf("3- litre to metrekup\n");
		printf("Cevirmek istediginiz secimi yapin (Cikis icin -1) > ");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1:  
				printf("inch degerini girin: ");
				scanf("%f",&inch);
				cm=INCH_TO_CM*inch;
				printf("%.2f inch = %.2f cm\n",inch,cm);
				break;
			case 2:
				printf("Fahrenheit degerini girin: ");
				scanf("%f",&fahrenheit);
				celcius=(fahrenheit-32)*5/9;	
				printf("%.2f F= %.2f C\n",fahrenheit,celcius);	
				break;
			case 3:
				printf("Litre degerini girin: ");
				scanf("%f",&litre);
				mcube=LITRE_TO_MCUBE*litre;
				printf("%.2f lt= %.2f m^3\n",litre,mcube);
				break;
			default:
				printf("Cikis yaptiniz...\n");
		}
		
	}
			
	return 0;
}









