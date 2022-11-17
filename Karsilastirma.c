#include<stdio.h>

int main(){
	int x,y,z;
	printf("Karsilastirilacak sayilari (x-y-z) sirasiyla giriniz : ");
	scanf("%d%d%d",&x,&y,&z);
	
	//En Büyük Sayıyı Bulalım
	if(x > y){
		if(x > z){
			printf("En buyuk sayi : %d",x);
		}
		else
		{
			printf("En buyuk sayi : %d",z);
		}
	}
	else{
		if(y>z){
			printf("En buyuk sayi : %d",y);
		}else{
			printf("En buyuk sayi : %d",z);
		}
	}
	return 0;
}
