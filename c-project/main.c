#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Gidilecek mesafeye göre gidiþ hýzý hesaplama*/
	
	float mesafe=0;
	int zaman=0;
	float hiz =0;
	
	printf("\n Gidilecek mesafe (m) : ");
	scanf("%f",&mesafe);
	printf("Mesafeniz : %f",mesafe);
	
	printf("\n Varis zamani (sn) : ");
	scanf("%d",&zaman);
	printf("Varis zamaniniz : ",zaman);
	
	hiz = (float) mesafe / zaman;
	printf("\n Hiziniz : %.2f m/s olmalidir.",hiz);
	
	getch();
	return 0;	
	
	
	
	return 0;
}
