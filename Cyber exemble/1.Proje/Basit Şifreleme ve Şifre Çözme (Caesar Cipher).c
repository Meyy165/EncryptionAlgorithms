#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int kym,i; //kym:kaydýrma miktarý
	char mesaj[100],ymesaj[100];//yeni mesaj
	printf("lutfen kaydirma miktarini giriniz: ");
	scanf("%d",&kym);
	printf("lutfen mesajinizi giriniz: ");
	getchar();  // Yeni satýr karakterini temizle (scanf'den önce)
	fgets(mesaj,100,stdin);
	
	for(i=0;mesaj[i]!='\0';i++){
		if(mesaj[i] >='A' && mesaj[i] <='Z'){
			ymesaj[i]=(mesaj[i]-'A'+kym)%26+'A';
		}
		else if(mesaj[i] >= 'a' && mesaj[i] <= 'z'){
            ymesaj[i]=((mesaj[i]-'a'+kym)%26)+'a';
        } 
        else{
        	ymesaj[i]=mesaj[i];
		}
	}
	ymesaj[i]='\0';	
	printf("%s",ymesaj);

	return 0;
	
}
