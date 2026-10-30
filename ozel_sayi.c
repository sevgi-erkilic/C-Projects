#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* abcd 4 basamaklý bir sayý olmak üzere abcd=(ab+cd)^2 ise buna özel sayý denir.
Bu ismi biz kendimiz verdik. Bu kurala uyan sayýlar 2025,3025,9801 dir.*/

int main(void) {
	int x,ab,cd,kare,top;
	printf("4 basamakli bir sayi giriniz:");
	scanf("%d",&x);
	ab=x/100;
	cd=x%100;
	top=ab+cd;
	//kare=top*top;
	kare=pow(top,2);// pow fonksiyonunu kullanabilmek için math.h kütüphanesini dahil etmek gerekiyor!!
	if(x==kare)
	     printf("%d sayisi ozel sayidir.",x);
	else
	     printf("%d sayisi ozel sayi degildir.",x);
	return 0;
}
