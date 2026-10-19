#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float r,v;
	const float PI=3.1415;
	printf("yaricapi giriniz:");
	scanf("%f",&r);
	// 4/3 kýsmýný bilgisayar 1 olarak kabul ettiði için sonuç yanlýþ çýkýyordu 
	//bu yüzden 4.0 diyerek manuel olarak float olduðunu kodda belirttik
	//*** v=(float)4/3 veya 4/(float)3 ya da herhangi birini .0 ile yazabiliriz***
	v=4.0/3.0*PI*pow(r,3);
	printf("yaricapi %f olan kurenin hacimi=%.2f\n",r,v);
	return 0;
}
