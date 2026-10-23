#include <stdio.h>
int main(void) {
	int x,y;
	x=6;
	y=2;
	printf("sonuc:%d\n",(x<5 && x>y));// 0 && 1 = 0
	printf("sonuc:%d\n",(x<5 || x>y));// 0 || 1 = 1
	printf("sonuc:%d\n",!(x<5 && x>y));// ! ( 0 && 1) = 1
	return 0;
}
