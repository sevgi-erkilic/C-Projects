#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int sayi1,sayi2,sayi3,sayi4;
	// << bu operatör en saðdaki kýsmý kaç yazarsanýz o kadar saða taþýr ve sona sýfýr ekler
	sayi1 = 7,// 7=00000111 --> 00111000=28
	sayi1 <<= 2 ;//28
	sayi2 = 5;
	sayi2 <<= 1;//10
	sayi3 = 8;
	sayi3 <<= 3;//64
	sayi4 = 6;
	sayi4 <<= 2;//24
	printf("sayi1= %d\n",sayi1);
	printf("sayi2= %d\n",sayi2);
	printf("sayi3= %d\n",sayi3);
	printf("sayi4= %d\n",sayi4);
	return 0;
}
