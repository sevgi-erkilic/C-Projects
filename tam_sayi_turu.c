#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int sayi;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi>0)
	 printf("Girdiginiz sayi pozitiftir.\n");
	else if(sayi<0)
	 printf("Girdiginiz sayi negatiftir.\n");
	else
	 printf("Girilen sayi sifirdir.\n");
	return 0;
}
