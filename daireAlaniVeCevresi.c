#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float r,alan=1,cevre=1;
	const float PI=3.1415;
	printf("yaricap giriniz:");
	scanf("%f",&r);
	alan=PI*r*r;
	cevre=2*PI*r;
	printf(" Alan=%f\n Cevre=%f\n",alan,cevre);
	return 0;
}
