#include <stdio.h>
/* Girilen sayýnýn tek mi çift mi olduðunu bulan program*/

int main(void) {
	int sayi;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi%2==0)
	 printf("Girilen sayi cifttir.");
	else
	 printf("Girilen sayi tektir.");
	return 0;
}
