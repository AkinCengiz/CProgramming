#include <stdio.h>
int main(){
	//De�i�kenler tan�mlan�yor...
	int xMiktarReak, xMiktarTup, yMiktarReak, yMiktarTup, zMiktarReak, zMiktarTup;
	
	//Kullan�c�dan x y ve z maddelerini s�ras�yla girmeleri istenir...
	printf("Sirasiyla Reaksiyonda Olusan X - Y - Z Maddelerinin Miktarini giriniz : ");
	scanf("%d%d%d",&xMiktarReak, &yMiktarReak, &zMiktarReak);
	
	//X Y Z Maddelerinin T�pte Kalan Kalan Miktarlar� Hesaplan�yor
	xMiktarTup = xMiktarReak % 100;
	yMiktarTup = (xMiktarReak / 100 + yMiktarReak) % 10;
	zMiktarTup = (xMiktarReak / 100 + yMiktarReak) / 10 + zMiktarReak;
	
	//T�pte Kalan Miktarlar Yazd�r�l�yor..
	printf("\nTupte Kalan X Madde Miktari : %d", xMiktarTup);
	printf("\nTupte Kalan Y Madde Miktari : %d", yMiktarTup);
	printf("\nTupte Kalan Z Madde Miktari : %d", zMiktarTup);
	
	return 0;
}
