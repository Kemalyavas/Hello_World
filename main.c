#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	//YGS 1 puan türü hesaplama
	
	//Türkçe: 1.99
	//Matematik: 3.98
	//Sosyal Bilgiler: 1
	//Fen Bilgisi: 2.999
	//Taban: 100.160
	
	float turkce,matematik,sosyal,fen,toplam_puan,taban;
	taban=100.160;
	printf("Turkce netiniz: ");
	scanf("%f",&turkce);
	printf("matematik netiniz: ");
	scanf("%f",&matematik);
	printf("Sosyal bilgiler netiniz: ");
	scanf("%f",&sosyal);
	printf("Fen Bilgisi netiniz: ");
	scanf("%f",&fen);
	
	toplam_puan=turkce*1.999+matematik*3.98+sosyal*1+fen*2.999+taban;
	printf("YGS - 1 puan turunde sonucunuz: %f",toplam_puan); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
