#include <stdio.h>
int main(){
	char harf;
	printf("Bir harf giriniz : ");
	scanf("%c",&harf);
	switch(harf)
	{
		case 'a':
		case 'e':
		case '�':
		case 'i':
		case 'o':
		case '�':
		case 'u':
		case '�':
			printf("%c sesli bir harftir",harf);
			break;
		default:
			printf("%c sessiz bir harftir ya da harf degildir... ",harf);
			break;
	}
	return 0;
}
