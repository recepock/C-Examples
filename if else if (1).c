#include <stdio.h>
int main()
{
	int sayi1, sayi2, sonuc,secim;
             printf("1.sayiyi girin:");
             scanf("%d",&sayi1);
             printf("2.sayiyi girin:");
             scanf("%d",&sayi2);
             printf("1-Toplama 2-Cikarma 3-Carpma 4-Bolme:");
             scanf("%d",&secim);
             if (secim==1)
             {
                 sonuc = sayi1 + sayi2;
                 printf("Toplamin sonucu:%d", sonuc);
             }
             else if (secim==2)
             {
                 sonuc = sayi1 - sayi2;
                 printf("Cikarmanin sonucu:%d", sonuc);
             }
             else if (secim==3)
             {
                 sonuc = sayi1 * sayi2;
                 printf("Carpmanin sonucu:%d", sonuc);
             }
             else if (secim==4)
             {
                 sonuc = sayi1 / sayi2;
                printf("Bolmenin sonucu:%d", sonuc);
             }
             else
             {
                 printf("Yanlis secim yaptiniz");
             }
	return 0;
}
/*---------------------------------------------------------------------------------*/
#include <stdio.h>
int main()
{
	int vize, odev, final, ortalama;
            printf("Vize notunu girin:");
            scanf("%d",&vize);
            printf("Odev notunu girin:");
            scanf("%d",&odev);
            printf("Final notunu girin:");
            scanf("%d",&final);
            ortalama = (vize+odev+final)/3;
            printf("ortalama: %d\n",ortalama);
            if (ortalama<=59)
            {
                printf("%d F notu ile kaldiniz", ortalama);
            }
            else if(ortalama<=64)
            {
                printf("%d C- ", ortalama); 
            }
            else if (ortalama <= 69)
            {
                printf("%d C ", ortalama);
            }
            else if (ortalama <= 74)
            {
                printf("%d C+ ", ortalama);
            }
            else if (ortalama <= 79)
            {
                printf("%d B- ", ortalama);
            }
            else if (ortalama <= 84)
            {
                printf("%d B ", ortalama);
            }
            else if (ortalama <= 89)
            {
                printf("%d B+ ", ortalama);
            }
            else if (ortalama <= 94)
            {
                printf("%d A- ", ortalama);
            }
            else if(ortalama<=100)
            {
                printf("%d A ", ortalama);
            }
            else
            {
                printf("%d yanlis ortalama ", ortalama);
            }
	return 0;
 
}