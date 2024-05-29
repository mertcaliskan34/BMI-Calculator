#include <stdio.h>

int main() 
{
	float kilo,boy,index;
	
	printf("                            VUCUT KITLE ENDEKSI HESAPLAMA PROGRAMINA HOSGELDINIZ\n");
	
	printf("Kilonuzu giriniz: "); scanf("%f",&kilo);
	
	printf("Boyunuzu metre cinsinden giriniz: "); scanf("%f",&boy);
	
	index=kilo/(boy*boy);
	
	printf("\nVucut kitle endeksiniz: %f",index);
	
	if (index<18.5) 
		printf("\n\nDegerlendirme: Zayifsiniz daha iyi beslenmelisiniz.");
		
	else if (index>=18.5 && index<25)
		printf("\n\nDegerlendirme: Kilonuz oldukca normal boyle devam :)");
		
	else if (index>=25 && index<30) 
		printf("\n\nDegerlendirme: Kilonuz normalin uzerinde beslenmenize dikkat edin.");
		
	else if (index>=30 && index<40) 
		printf("\n\nDegerlendirme: Obezsiniz diyet yapmaniz tavsiye edilir.");
		
	else if (index>=40) 
		printf("\n\nDegerlendirme: Ileri derecede obezsiniz kesinlikle bir diyetisyene basvurun.");
	return 0;
}
