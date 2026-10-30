#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int sayi,karekok;
	printf("Pozitif bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi>0)
	{
		karekok=sqrt(sayi);
		if(sayi==pow(karekok,2))
		printf("Girdiginiz sayinin karekoku tam sayidir.");
		else
		printf("Girdiginiz sayinin karekoku tam sayi degildir.");
	}
	else
	printf("Pozitif sayi girmediniz.");
	return 0;
}
