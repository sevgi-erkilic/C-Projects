#include <stdio.h>
int main(void) {
	// Kullanýcýdan 4  basamaklý sayý alýp bu sayýnýn rakamlarý toplamýný bulan program
	int a,bin,yuz,on,bir,toplam;
	printf("4 basamakli bir sayi giriniz->");
	scanf("%d",&a);
	bin=a/1000;// a yý 1000 e bölerek binler basamaðýnda kaç olduðunu bulduk
	yuz=(a%1000)/100;//önce a nýn 1000 e bölümünden kalaný bulduk sonra da yüze bölerek yüzler basamaðýný bulduk
	on=(a%100)/10;//a nýn 100 e bölümünden kalaný sonra da 10 a bölerek onlar basamaðýný bulduk
	bir=a%10;// a nýn 10 a bölümünün modunu yani kalanýný bulduðumuzda birler basamaðýný bulmuþ olduk
	toplam=bin+yuz+on+bir;// hepsini topladýk
	printf("binler basamagi=%d\nyuzler basamagi=%d\nonlar basamagi=%d\nbirler basamagi=%d\n",bin,yuz,on,bir);
	printf("girdiginiz sayinin rakamlari toplami = %d\n",toplam);
	return 0;
}
