#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char parola[20];
	int i,buyuk=0,kucuk=0,sayi=0,ozel=0,uzunluk=0;
	printf("lutfen bir parola girin : ");
	scanf("%s",&parola);//paarola bosluk icermemeli bu yuzden gets kullanmadik
	for(i=0;parola[i]!='\0';i++){
		
		if(parola[i]>='A' && parola[i]<='Z'){
			buyuk=1;
		}
		else if(parola[i]>='a' && parola[i]<='z'){
			kucuk=1;
		}
		else if(parola[i]>='0' && parola[i]<='9'){
			sayi=1;
		}
		else{
			ozel=1;
		}
	}
	
	if(i >= 8){
		uzunluk=1;
	}

	if(kucuk && buyuk && sayi && ozel && uzunluk){
		printf("Girilen sifre uygundur");
	}
	else{
		printf("Girilen sifre uygun degildir nedeni ise\n");
		if(!buyuk){
			printf("Lutfen en az bir buyuk harf kullanin\n");
		}
		if(!kucuk){
			printf("Lutfen en az bir kucuk harf kullanin\n");
		}	
		if(!sayi){
			printf("Lutfen en az bir rakam kullanin\n");
		}
		if(!ozel){
			printf("Lutfen en az bir ozel karakter kullanin\n");
		}
		if(!uzunluk){
			printf("Lutfen en az 8 karakter kullanin\n");
		}
	}

	return 0;
}
