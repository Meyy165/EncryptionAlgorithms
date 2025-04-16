#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char metin[100],sifreli[100],sifre[50];
	int i,kyd1,kyd2,sifre_uzunlugu;//kaydirma miktari
	
	printf("Lutfen bir metin giriniz : ");
	gets(metin);
	printf("Lutfen bir sifre giriniz");
	gets(sifre);
	sifre_uzunlugu=strlen(sifre);
	for(i=0 ; metin[i]!='\0' ; i++){
		if(metin[i]>='A' && metin[i]<='Z'){
		//1.yol
			sifreli[i]=(metin[i]-'A'+sifre[i%sifre_uzunlugu]-'A')%26+'A';	

		}
		else if(metin[i]>='a' && metin[i]<='z'){
		//2.yol
			kyd1=metin[i]-'a';
			kyd2=sifre[i%sifre_uzunlugu]-'a';
			sifreli[i]=(kyd1+kyd2)%26+'a';
			
		}
		else{
			sifreli[i]=metin[i];
		}
		
	}
	sifreli[i]='\0';
	printf("Girilen metnin sifrelenmis hali\n");
	printf("%s",sifreli);

	
	return 0;
}
