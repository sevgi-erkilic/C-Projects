#include <stdio.h>
int main(void) {
	int sayi, bolum,kalan,toplam;
	toplam=0;
	printf("4 basamakli bir sayi giriniz:");
	scanf("%d",&sayi);
	bolum=sayi/1000;
	toplam+=bolum;
	kalan=sayi%1000;
	bolum=kalan/100;
	toplam+=bolum;
	kalan %=100;
	bolum=kalan/10;
	toplam+=bolum;
	kalan%=10;
	toplam+=kalan;
	printf("girdiginiz sayinin rakamlari toplami=%d",toplam);
	return 0;
}
