#include <iostream>
using namespace std;
# include<stdio.h>
#include <math.h>
// 7)c İkinci Dereceden Bir Denklemin Köklerini Bulan Program
// Hazal_Kayiket_200114014025_cevap 7)c
/*Fonksiyonların en işlevsel kısmı tekrarlanan yapıların döndürülmesini sağlamaktır. Programla üretilen örnek çıktılar en sondadır : 77.satır.*/
float sayiGirme(float a) {
	printf("Lütfen sayıyı giriniz: ");
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


int main() { // 7)c İkinci Dereceden Bir Denklemin Köklerini Bulan Program

	setlocale(LC_ALL,"Turkish");

	printf("İkinci dereceden a*x^2 + b*x + c = 0 şeklindeki denkleminden a, b, c katsayıları alınarak kökler programla bulunmaktadır. \nLütfen sırayla a, b ve c katsayılarını giriniz. \n \nAyrıca ifade çarpanları cinsinden de ifade edilmektedir: \n");
	float a, b, c, kok1, kok2, delta;
	//delta = b*b - 4*a*c
	printf("%2.03f\n", (a = sayiGirme(a)));
	printf("%2.03f\n", (b = sayiGirme(b)));
	printf("%2.03f\n", (c = sayiGirme(c)));


	printf("Katsayıları a = %2.03f, b = %2.03f, c = %2.03f olan denklem = (%.0f)*x^2 + (%.0f)x + (%.0f) =  0 ise kökleri :\n ", a, b, c, a, b, c);
	delta = fark(kareAl(b),carp(4,carp(a,c)));
	printf("\nDelta = %2.03f\n", delta);

	if(delta < 0) {
		printf("\n\nDelta sıfırdan küçüktür. Gerçek kök yok!");
	} else if (delta == 0) {
		printf("\nTek kök vardır. x = %2.03f", kokBulmaTek(a,b));
		printf("\nÇarpanlarına ayrılmış hali = (x +(%2.03f))^2", carp(-1.0, kokBulmaTek(a,b)));
		printf("\nKökler toplamı = %2.03f",bol(carp(-1.0,b),a)); //-b/a
		printf("\nKökler çarpımı = %2.03f",bol(c,a)); //c/a
	} else {
		printf("\nBirinci kök = x1 = %2.03f", kokBulma1(a,b,delta));
		printf("\nİkinci kök = x2 = %2.03f", kokBulma2(a,b,delta));
		printf("\nÇarpanlarına ayrılmış hali = (x +(%2.03f))*(x +(%2.03f))", carp(-1.0,kokBulma1(a,b,delta)),carp(-1.0,kokBulma2(a,b,delta)));
		printf("\nKökler toplamı = %2.03f",bol(carp(-1.0,b),a)); //-b/a
		printf("\nKökler çarpımı = %2.03f",bol(c,a)); //c/a
	}

	return 0;
}

/*
Örnek Çıktı 1: 
İkinci dereceden a*x^2 + b*x + c = 0 şeklindeki denkleminden a, b, c katsayıları alınarak kökler programla bulunmaktadır.
Lütfen sırayla a, b ve c katsayılarını giriniz.

Ayrıca ifade çarpanları cinsinden de ifade edilmektedir:
Lütfen sayıyı giriniz: 1
1,000
Lütfen sayıyı giriniz: 0
0,000
Lütfen sayıyı giriniz: 6
6,000
Katsayıları a = 1,000, b = 0,000, c = 6,000 olan denklem = (1)*x^2 + (0)x + (6) =  0 ise kökleri :

Delta = -24,000


Delta sıfırdan küçüktür. Gerçek kök yok!

Örnek 2:
İkinci dereceden a*x^2 + b*x + c = 0 şeklindeki denkleminden a, b, c katsayıları alınarak kökler programla bulunmaktadır.
Lütfen sırayla a, b ve c katsayılarını giriniz.

Ayrıca ifade çarpanları cinsinden de ifade edilmektedir:
Lütfen sayıyı giriniz: 1
1,000
Lütfen sayıyı giriniz: 2
2,000
Lütfen sayıyı giriniz: 1
1,000
Katsayıları a = 1,000, b = 2,000, c = 1,000 olan denklem = (1)*x^2 + (2)x + (1) =  0 ise kökleri :

Delta = 0,000

Tek kök vardır. x = -1,000
Çarpanlarına ayrılmış hali = (x +(1,000))^2
Kökler toplamı = -2,000
Kökler çarpımı = 1,000
--------------------------------
Process exited after 6.368 seconds with return value 0
Press any key to continue . . .


Örnek Çıktı 3: 
İkinci dereceden a*x^2 + b*x + c = 0 şeklindeki denkleminden a, b, c katsayıları alınarak kökler programla bulunmaktadır.
Lütfen sırayla a, b ve c katsayılarını giriniz.

Ayrıca ifade çarpanları cinsinden de ifade edilmektedir:
Lütfen sayıyı giriniz: 1
1,000
Lütfen sayıyı giriniz: 1
1,000
Lütfen sayıyı giriniz: -7
-7,000
Katsayıları a = 1,000, b = 1,000, c = -7,000 olan denklem = (1)*x^2 + (1)x + (-7) =  0 ise kökleri :

Delta = 29,000

Birinci kök = x1 = 2,000
İkinci kök = x2 = -3,193
Çarpanlarına ayrılmış hali = (x +(-2,000))*(x +(3,193))
Kökler toplamı = -1,000
Kökler çarpımı = -7,000
--------------------------------
Process exited after 21.76 seconds with return value 0
Press any key to continue . . .

*/
