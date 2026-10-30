#include <stdio.h>
int main(void) {
	int sayi,kalan,on,bir;
	printf("En az iki basamakli bir sayi giriniz:");//123
	scanf("%d",&sayi);
	kalan=sayi%100;//23
	on=kalan/10;//2
	bir=kalan%10;//3
	printf("Girdiginiz sayinin onlar basamagi:%d ve birler basamagi:%d",on,bir);
	return 0;
}
