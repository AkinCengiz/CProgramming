#include <stdio.h>

int main(){
	//De�i�kenleri tan�ml�yoruz...
	float odeFaturaMik, yeniBirim, eskiBirim, eskiAboneUcret, yeniAboneUcret, enflasyon;
	int yeniOkuma, eskiOkuma, toplamHarcanan;
	//Kulan�c�dan de�erler al�n�yor
	printf("Enflasyon oranini giriniz : ");
	scanf("%f",&enflasyon);
	printf("\nEski Birim Fiyati : ");
	scanf("%f",&eskiBirim);
	printf("\nEski Abone Ucreti : ");
	scanf("%f",&eskiAboneUcret);
	printf("\nEski Okuma Parametresi : ");
	scanf("%d",&eskiOkuma);
	printf("\nYeni Okuma Parametresi : ");
	scanf("%d",&yeniOkuma);
	//Gerekli hesaplamalar yap�l�yor
	toplamHarcanan = yeniOkuma - eskiOkuma;
	yeniBirim = eskiBirim * (1 + enflasyon/100);
	yeniAboneUcret = eskiAboneUcret + (1 + enflasyon / 100);
	odeFaturaMik = yeniBirim * toplamHarcanan + yeniAboneUcret;
	
	printf("Odenecek Fatura Tutar� : %f",odeFaturaMik);
}
