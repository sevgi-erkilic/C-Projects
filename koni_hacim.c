#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float r,h,v;
	const float PI=3.1415;
	printf(" yaricapi ve yuksekligi giriniz:");
	scanf("%f%f",&r,&h);
	v=1/3.0*PI*pow(r,2)*h;
	printf("yaricapi %f, yuksekligi %f olan koninin hacimi:%.3f",r,h,v);
	return 0;
}
