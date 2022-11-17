#include <stdio.h>
int main(){
	//Deðiþkenler tanýmlanýyor...
	int xMiktarReak, xMiktarTup, yMiktarReak, yMiktarTup, zMiktarReak, zMiktarTup;
	
	//Kullanýcýdan x y ve z maddelerini sýrasýyla girmeleri istenir...
	printf("Sirasiyla Reaksiyonda Olusan X - Y - Z Maddelerinin Miktarini giriniz : ");
	scanf("%d%d%d",&xMiktarReak, &yMiktarReak, &zMiktarReak);
	
	//X Y Z Maddelerinin Tüpte Kalan Kalan Miktarlarý Hesaplanýyor
	xMiktarTup = xMiktarReak % 100;
	yMiktarTup = (xMiktarReak / 100 + yMiktarReak) % 10;
	zMiktarTup = (xMiktarReak / 100 + yMiktarReak) / 10 + zMiktarReak;
	
	//Tüpte Kalan Miktarlar Yazdýrýlýyor..
	printf("\nTupte Kalan X Madde Miktari : %d", xMiktarTup);
	printf("\nTupte Kalan Y Madde Miktari : %d", yMiktarTup);
	printf("\nTupte Kalan Z Madde Miktari : %d", zMiktarTup);
	
	return 0;
}
