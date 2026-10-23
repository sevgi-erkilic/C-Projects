#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int sayi1,sayi2,sayi3,sayi4;
	//XOR bu operatör iki ifade birbirinden farklý doðruluk deðerine sahip olunca doðru olur
	sayi1 = 7;// 7=00000111 12=00001100 7&=12 --> 00001011 yani 11 e eþittir
	sayi1 ^= 12 ;//11
	sayi2 = 5;
	sayi2 ^= 3;//6
	sayi3 = 8;
	sayi3 ^= 10;//2
	sayi4 = 6;
	sayi4 ^= 5;//3
	printf("sayi1= %d\n",sayi1);
	printf("sayi2= %d\n",sayi2);
	printf("sayi3= %d\n",sayi3);
	printf("sayi4= %d\n",sayi4);
	return 0;
}
