#include <stdio.h>
int main(){
	int a,b,c;
	char enuzun;
	printf("Ucgenin kenar olculerini (a - b - c) giriniz : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			enuzun = 'a';
		}
		else
		{
			enuzun = 'c';
		}
	}
	else
	{
		if(b>c)
		{
			enuzun = 'b';
		}
		else
		{
			enuzun = 'c';
		}
	}
	if(enuzun == 'a')
	{
		if( a*a == b*b + c*c)
		{
			printf("a : %d - b : %d - c: %d ucgeni dik acili ucgendir...",a,b,c);
		}
		else if(a*a > b*b + c*c)
		{
			printf("a : %d - b : %d - c: %d ucgeni genis acili ucgendir...",a,b,c);
		}
		else if(a*a < b*b + c*c)
		{
			printf("a : %d - b : %d - c: %d ucgeni dar acili ucgendir...",a,b,c);
		}
		else
		{
			printf("a : %d - b : %d - c: %d ucgeni cizilemez...",a,b,c);
		}
	}
	else if (enuzun == 'b')
	{
		if( b*b == a*a + c*c)
		{
			printf("a : %d - b : %d - c: %d ucgeni dik acili ucgendir...",a,b,c);
		}
		else if(b*b > a*a + c*c)
		{
			printf("a : %d - b : %d - c: %d ucgeni genis acili ucgendir...",a,b,c);
		}
		else if(b*b < a*a + c*c)
		{
			printf("a : %d - b : %d - c: %d ucgeni dar acili ucgendir...",a,b,c);
		}
		else
		{
			printf("a : %d - b : %d - c: %d ucgeni cizilemez...",a,b,c);
		}		
	}
	else
	{
		if( c*c == a*a + b*b)
		{
			printf("a : %d - b : %d - c: %d ucgeni dik acili ucgendir...",a,b,c);
		}
		else if(c*c > a*a + b*b)
		{
			printf("a : %d - b : %d - c: %d ucgeni genis acili ucgendir...",a,b,c);
		}
		else if(c*c < a*a + b*b)
		{
			printf("a : %d - b : %d - c: %d ucgeni dar acili ucgendir...",a,b,c);
		}
		else
		{
			printf("a : %d - b : %d - c: %d ucgeni cizilemez...",a,b,c);
		}
	}
	return 0;
}
