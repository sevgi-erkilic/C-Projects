#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int sayi1,sayi2,sayi3,sayi4;
	//>> bu operatör saða kaydýrma yapar
	sayi1 = 7,// 7=00000111 --> 00000001= 1 olur
	sayi1 >>= 2 ;//1
	sayi2 = 5;
	sayi2 >>= 1;//2
	sayi3 = 8;
	sayi3 >>= 4;//0
	sayi4 = 6;
	sayi4 >>= 2;//1
	printf("sayi1= %d\n",sayi1);
	printf("sayi2= %d\n",sayi2);
	printf("sayi3= %d\n",sayi3);
	printf("sayi4= %d\n",sayi4);
	return 0;
}
