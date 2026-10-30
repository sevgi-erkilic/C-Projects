#include <stdio.h>
#include <stdlib.h>

/* mecliste toplantý olabilmesi için belirli bir sayýda millet vekili gelmesi gerekir
buna göre toplantý var mý yok mu yazan program */

int main(void) {
	int partiA,partiB,partiC,gelenler;
	const int toplamMilletvekili=600;
	printf("Meclisteki partilerin milletvekili sayilarini girin:");
	scanf("%d%d%d",&partiA,&partiB,&partiC);
	gelenler=partiA+partiB+partiC;
	if(gelenler<toplamMilletvekili/2)
	  printf("Gerekli sayi saglanamadigi için toplantiya ara verildi.\nToplanti gerek sayisi:%d dir",toplamMilletvekili/2);
	else
	  printf("Meclis toplantiya hazir.\n");
	return 0;
}
