#include <stdio.h>
int main(void) {
	int a,b,c,d,top;
	float aritOrt;
	printf("Birinci sayiyi giriniz:");
	scanf("%d",&a);
	top+=a;
	printf("Ýkinci sayiyi giriniz:");
	scanf("%d",&b);
	top+=b;
	printf("Ucuncu sayiyi giriniz:");
	scanf("%d",&c);
	top+=c;
	printf("Dorduncu sayiyi giriniz:");
	scanf("%d",&d);
	top+=d;
	aritOrt=(float)top/4;
	printf("Girdiginiz 4 sayinin aritmetik ortalamasi:%.2f",aritOrt);
	return 0;
}
