#include <stdio.h>
int main(){
	//Değişkenler tanımlanıyor...
	int xMiktarReak, xMiktarTup, yMiktarReak, yMiktarTup, zMiktarReak, zMiktarTup;
	
	//Kullanıcıdan x y ve z maddelerini sırasıyla girmeleri istenir...
	printf("Sirasiyla Reaksiyonda Olusan X - Y - Z Maddelerinin Miktarini giriniz : ");
	scanf("%d%d%d",&xMiktarReak, &yMiktarReak, &zMiktarReak);
	
	//X Y Z Maddelerinin Tüpte Kalan Kalan Miktarları Hesaplanıyor
	xMiktarTup = xMiktarReak % 100;
	yMiktarTup = (xMiktarReak / 100 + yMiktarReak) % 10;
	zMiktarTup = (xMiktarReak / 100 + yMiktarReak) / 10 + zMiktarReak;
	
	//Tüpte Kalan Miktarlar Yazdırılıyor..
	printf("\nTupte Kalan X Madde Miktari : %d", xMiktarTup);
	printf("\nTupte Kalan Y Madde Miktari : %d", yMiktarTup);
	printf("\nTupte Kalan Z Madde Miktari : %d", zMiktarTup);
	
	return 0;
}
