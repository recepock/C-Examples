#include <stdio.h>

void kare_hesapla(int sayi)
{
	int sonuc;
	sonuc = sayi * sayi;
	printf("Sayinin karesi\t: %d\n", sonuc);
}

void kup_hesapla(int sayi)
{
	int sonuc;
	sonuc = sayi * sayi * sayi;
	printf("Sayinin kupu\t: %d", sonuc);
}

int main()
{
	int a;
	printf("Sayi girin:");
	scanf("%d", &a);
	printf("Girilen sayi\t: %d\n", a);
	kare_hesapla(a);
	kup_hesapla(a);

	return 0;
}
