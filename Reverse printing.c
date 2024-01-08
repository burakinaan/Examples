#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	char metin[100];
	
	printf("Metni giriniz : "); gets(metin);
	
	for(i=strlen(metin); i>=0; i--)
	{
	printf("%c",metin[i]);
	}
	
	return 0;
}