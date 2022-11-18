#include <stdio.h>
int main(){
	int toplamUcret, sabitUcret=100;
	int girisSaat, girisDakika, cikisSaat, cikisDakika, ekstraUcret, ekstraSure, toplamSure, saatBasiUcret=10;
	int hataVar=0;
	//giriş ve Çıkış saatleri alınıyor.
	printf("Giris saat ve dakika bilgilerini giriniz : ");
	scanf("%d %d",&girisSaat,&girisDakika);
	//Çıkış saat ve dakika bilgileri alınıyor
	printf("Cikis saat ve dakika bilgilerini giriniz :");
	scanf("%d %d",&cikisSaat,&cikisDakika);
	
	if(girisSaat >= 24 || girisSaat < 6)
	{
		hataVar=1;
	}
	if(cikisSaat>=24 || cikisSaat<6){
		hataVar=1;
	}
	if((girisSaat>cikisSaat)||(girisSaat==cikisSaat && girisDakika >cikisDakika))
	{
		hataVar=1;
	}
	
	if(hataVar==1){
		printf("Giris ve cikis degerlerinde hata var...\nProgrami tekrar baslatin...");
	}
	else{
		if (cikisDakika<girisDakika){
			cikisDakika += 60;
			cikisSaat -= 1;
		}
		toplamSure = cikisSaat - girisSaat;
		if(cikisDakika - girisDakika > 10)
		{
			toplamSure++;
		}
		if(toplamSure == 0)
		{
			toplamSure++;
		}
		
		ekstraSure = --toplamSure;
		if(ekstraSure > 0)
		{
			if(ekstraSure <= 5)
			{
				saatBasiUcret = 8;
			}
			else if(ekstraSure<=12)
			{
				saatBasiUcret = 6;
			}
			else if(ekstraSure<=15)
			{
				saatBasiUcret = 4;
			}
			else
			{
				saatBasiUcret =2;
			}
		}
		
		ekstraUcret = ekstraSure * saatBasiUcret;
		toplamUcret = ekstraUcret + sabitUcret;
		
		printf("Odenecek toplam ucret : %d",toplamUcret);
	}
	return 0;
	
}
