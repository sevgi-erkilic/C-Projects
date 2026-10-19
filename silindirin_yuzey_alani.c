#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float r,h,alan;
	const float PI=3.14;
	printf("r yi ve h yi gir:");
	scanf("%f%f",&r,&h);
	alan=2*PI*r*(r+h);
	printf("alan=%.2f",alan);
	return 0;
}
