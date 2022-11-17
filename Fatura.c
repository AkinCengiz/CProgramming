#include <stdio.h>
int main(){
	float faturaMiktari, ilkBirimFiyat,yeniBirimFiyat,enflasyon, ilkAbonelik,yeniAbonelik;
	int ilkOkuma, sonOkuma, elektrikKullanimi;
	
	ilkOkuma=0;
	ilkBirimFiyat=10.0f;
	ilkAbonelik = 5.0f;
	int i=1;
	while(i==1)
	{
		printf("ilk Okuma : %d\nOkunan Sayac Degeri : ",ilkOkuma);
		scanf("%d",&sonOkuma);
		printf("Son Okuma : %d\nEnflasyon Orani : ",sonOkuma);
		scanf("%f",&enflasyon);
		printf("\nEnflasyon Orani : %f",enflasyon);
		elektrikKullanimi = sonOkuma - ilkOkuma;
		ilkOkuma = sonOkuma;
		yeniAbonelik = ilkAbonelik + ilkAbonelik*enflasyon/100;
		ilkAbonelik = yeniAbonelik;
		yeniBirimFiyat = ilkBirimFiyat + ilkBirimFiyat*enflasyon/100;
		ilkBirimFiyat = yeniBirimFiyat;
		
		faturaMiktari = yeniBirimFiyat * elektrikKullanimi + yeniAbonelik;
		printf("\nFatura Miktari : %f\nDevam et (Evet - 1 , Hayir - 0) ",faturaMiktari);
		scanf("%d",&i);
	}
	return 0;	
}
