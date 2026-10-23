#include <stdio.h>
/* Bir elektrik daðýtým þirketi verdikleri hizmet karþýlýðýnda müþterilerinden
aylýk olarak harcanan toplam kilowatt saat miktarýnca ve belirli bir abonelik ücreti
talep etmektedir. Birim kilowatt saat ücreti ve abonelik ücretiher ay aylýk enflasyon oranýnda artmaktadýr.
Buna göre müþterinin bir aya ait ödeyeceði elektrik faturasýnýn miktarýný hesaplayan program
Fatura miktarý= harcanan elektrik* birim fiyat + abone ücreti  */
int main(void) {
	float fatura,eskiBirim,yeniBirim,yeniAbone,eskiAbone,enflasyon;
	int eskiOkuma,yeniOkuma,harcananElektrik;
	printf("enflasyonu girin:");
	scanf("%f",&enflasyon);
	printf("eski birim fiyatini girin:");
	scanf("%f",&eskiBirim);
	printf("eski abone ücretini girin:");
	scanf("%f",&eskiAbone);
	printf("eski okuma degerini girin:");
	scanf("%d",&eskiOkuma);
	printf("yeni okuma degerini girin:");
	scanf("%d",&yeniOkuma);
	harcananElektrik=yeniOkuma-eskiOkuma;
	yeniBirim= eskiBirim+eskiBirim*enflasyon;
	yeniAbone=eskiAbone+eskiAbone*enflasyon;
	fatura= harcananElektrik*yeniBirim+yeniAbone;
	printf("odemeniz gereken fatura miktari:%.2f",fatura);
	return 0;
}
