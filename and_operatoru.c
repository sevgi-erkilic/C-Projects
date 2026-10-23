#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int sayi1,sayi2,sayi3,sayi4;
	// AND operatörü iþlem yapýlan sayýlarýn 2 lik sistemdeki karþýlýklarýna bakar ve
	// eðer karþýlýklý deðerlerin ikisi de birse sonucun ayný kuvvetteki deðerine 1 yazar
	// 2lik sistemde saðdan sola 2^0 dan baþlayarak saða doðru kuvvetleri þeklinde artar
	// 1 olan kýsýmlarý 2 nin hangi kuvvetine geliyorsa onunla çarpar ve hepsini toplarýz 0 olan kýsýmlar 0 ile çarpýldýðýndan 0 olur.
	sayi1 = 7,// 7=00000111 12=00001100 7&=12 --> 00000100 yani 4 e eþittir
	sayi1 &= 12 ;//4
	sayi2 = 5;
	sayi2 &= 3;//1
	sayi3 = 8;
	sayi3 &= 10;//8
	sayi4 = 6;
	sayi4 &= 5;//4
	printf("sayi1= %d\n",sayi1);
	printf("sayi2= %d\n",sayi2);
	printf("sayi3= %d\n",sayi3);
	printf("sayi4= %d\n",sayi4);
	return 0;
}
