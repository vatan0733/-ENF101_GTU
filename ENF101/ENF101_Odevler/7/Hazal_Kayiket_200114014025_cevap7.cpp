#include <iostream>
using namespace std;
# include<stdio.h>
#include <math.h>
// 7)c Ýkinci Dereceden Bir Denklemin Köklerini Bulan Program
// Hazal_Kayiket_200114014025_cevap 7)c
/*Fonksiyonlarýn en iþlevsel kýsmý tekrarlanan yapýlarýn döndürülmesini saðlamaktýr. Programla üretilen örnek çýktýlar en sondadýr : 77.satýr.*/
float sayiGirme(float a) {
	printf("Lütfen sayýyý giriniz: ");
	scanf("%f",&a);
	return a;
}
float fark(float a, float b) {
	return a-b;
}

float carp(float a, float b) {
	return a*b;
}
float kareAl(float a) {
	return pow(a,2);
}
float topla(int a, int b) {
	return a+b;
}
float karekok(double a) {
	return sqrt(a);
}
float bol(float a, float b) {
	return a/b;
}
float kokBulma1(float a, float b, float delta) {
	return bol(topla(carp(-1.0,b),karekok(delta)),carp(2.0,a));
}
float kokBulma2(float a, float b, float delta) {
	return bol(fark(carp(-1.0,b),karekok(delta)),carp(2.0,a));
}
float kokBulmaTek(float a, float b) {
	return bol(carp(-1.0,b),carp(2.0,a));
}


int main() { // 7)c Ýkinci Dereceden Bir Denklemin Köklerini Bulan Program

	setlocale(LC_ALL,"Turkish");

	printf("Ýkinci dereceden a*x^2 + b*x + c = 0 þeklindeki denkleminden a, b, c katsayýlarý alýnarak kökler programla bulunmaktadýr. \nLütfen sýrayla a, b ve c katsayýlarýný giriniz. \n \nAyrýca ifade çarpanlarý cinsinden de ifade edilmektedir: \n");
	float a, b, c, kok1, kok2, delta;
	//delta = b*b - 4*a*c
	printf("%2.03f\n", (a = sayiGirme(a)));
	printf("%2.03f\n", (b = sayiGirme(b)));
	printf("%2.03f\n", (c = sayiGirme(c)));


	printf("Katsayýlarý a = %2.03f, b = %2.03f, c = %2.03f olan denklem = (%.0f)*x^2 + (%.0f)x + (%.0f) =  0 ise kökleri :\n ", a, b, c, a, b, c);
	delta = fark(kareAl(b),carp(4,carp(a,c)));
	printf("\nDelta = %2.03f\n", delta);

	if(delta < 0) {
		printf("\n\nDelta sýfýrdan küçüktür. Gerçek kök yok!");
	} else if (delta == 0) {
		printf("\nTek kök vardýr. x = %2.03f", kokBulmaTek(a,b));
		printf("\nÇarpanlarýna ayrýlmýþ hali = (x +(%2.03f))^2", carp(-1.0, kokBulmaTek(a,b)));
		printf("\nKökler toplamý = %2.03f",bol(carp(-1.0,b),a)); //-b/a
		printf("\nKökler çarpýmý = %2.03f",bol(c,a)); //c/a
	} else {
		printf("\nBirinci kök = x1 = %2.03f", kokBulma1(a,b,delta));
		printf("\nÝkinci kök = x2 = %2.03f", kokBulma2(a,b,delta));
		printf("\nÇarpanlarýna ayrýlmýþ hali = (x +(%2.03f))*(x +(%2.03f))", carp(-1.0,kokBulma1(a,b,delta)),carp(-1.0,kokBulma2(a,b,delta)));
		printf("\nKökler toplamý = %2.03f",bol(carp(-1.0,b),a)); //-b/a
		printf("\nKökler çarpýmý = %2.03f",bol(c,a)); //c/a
	}

	return 0;
}

/*
Örnek Çýktý 1: 
Ýkinci dereceden a*x^2 + b*x + c = 0 þeklindeki denkleminden a, b, c katsayýlarý alýnarak kökler programla bulunmaktadýr.
Lütfen sýrayla a, b ve c katsayýlarýný giriniz.

Ayrýca ifade çarpanlarý cinsinden de ifade edilmektedir:
Lütfen sayýyý giriniz: 1
1,000
Lütfen sayýyý giriniz: 0
0,000
Lütfen sayýyý giriniz: 6
6,000
Katsayýlarý a = 1,000, b = 0,000, c = 6,000 olan denklem = (1)*x^2 + (0)x + (6) =  0 ise kökleri :

Delta = -24,000


Delta sýfýrdan küçüktür. Gerçek kök yok!

Örnek 2:
Ýkinci dereceden a*x^2 + b*x + c = 0 þeklindeki denkleminden a, b, c katsayýlarý alýnarak kökler programla bulunmaktadýr.
Lütfen sýrayla a, b ve c katsayýlarýný giriniz.

Ayrýca ifade çarpanlarý cinsinden de ifade edilmektedir:
Lütfen sayýyý giriniz: 1
1,000
Lütfen sayýyý giriniz: 2
2,000
Lütfen sayýyý giriniz: 1
1,000
Katsayýlarý a = 1,000, b = 2,000, c = 1,000 olan denklem = (1)*x^2 + (2)x + (1) =  0 ise kökleri :

Delta = 0,000

Tek kök vardýr. x = -1,000
Çarpanlarýna ayrýlmýþ hali = (x +(1,000))^2
Kökler toplamý = -2,000
Kökler çarpýmý = 1,000
--------------------------------
Process exited after 6.368 seconds with return value 0
Press any key to continue . . .


Örnek Çýktý 3: 
Ýkinci dereceden a*x^2 + b*x + c = 0 þeklindeki denkleminden a, b, c katsayýlarý alýnarak kökler programla bulunmaktadýr.
Lütfen sýrayla a, b ve c katsayýlarýný giriniz.

Ayrýca ifade çarpanlarý cinsinden de ifade edilmektedir:
Lütfen sayýyý giriniz: 1
1,000
Lütfen sayýyý giriniz: 1
1,000
Lütfen sayýyý giriniz: -7
-7,000
Katsayýlarý a = 1,000, b = 1,000, c = -7,000 olan denklem = (1)*x^2 + (1)x + (-7) =  0 ise kökleri :

Delta = 29,000

Birinci kök = x1 = 2,000
Ýkinci kök = x2 = -3,193
Çarpanlarýna ayrýlmýþ hali = (x +(-2,000))*(x +(3,193))
Kökler toplamý = -1,000
Kökler çarpýmý = -7,000
--------------------------------
Process exited after 21.76 seconds with return value 0
Press any key to continue . . .

*/
