#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char metin[100],sifreli[100],sifre[50];
	int i,kyd1,kyd2,sifre_uzunlugu;//kaydirma miktari
	
	printf("Lutfen sifrelenmis metini giriniz : ");
	gets(sifreli);
	printf("Lutfen bir sifre giriniz : ");
	gets(sifre);
	sifre_uzunlugu=strlen(sifre);
	for(i=0 ; sifreli[i]!='\0' ; i++){
		if(sifreli[i]>='A' && sifreli[i]<='Z'){
			kyd1=sifreli[i]-'A';
			kyd2=sifre[i%sifre_uzunlugu]-'A';
			metin[i]=(kyd1-kyd2+26)%26+'A';
		}
		
		else if(sifreli[i]>='a' && sifreli[i]<='z'){
			kyd1=sifreli[i]-'a';
			kyd2=sifre[i%sifre_uzunlugu]-'a';
			metin[i]=(kyd1-kyd2+26)%26+'a';
		}
		
		else{
			metin[i]=sifreli[i];
		}
		
	}
	metin[i]='\0';
	printf("Girilen metnin sifrelenmis hali\n");
	printf("%s",metin);

	
	return 0;
}

