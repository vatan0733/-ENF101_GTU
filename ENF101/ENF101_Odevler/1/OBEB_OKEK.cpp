#include <iostream>
using namespace std;
#include <stdio.h>
//1. Soru OBEB - OKEK Hesabý
int obeb(int a, int b) {
	if (b == 0)
			return a;
		return obeb(b, a % b); //Burada Öklid Algoritmasý kullanýlarak kendi kendini çaðýran fonksiyon kullanýlmýþtýr.
		//Öklid Algoritmasý : a = b·Q + r ve  != 0 ise bu durumda OBEB(a,b) = OBEB(b,r) . Bizim buradaki r'miz r = a % b olan kalan olacaktýr.
}

int okek(int a, int b) {
	return (a * b) / obeb(a, b); //Bilindiði üzere OBEB *OKEK = a*b'yi verir. Bu nedenle önce OBEB bulundu sonrasýnda da (a*b) OBEB'e bölünerek OKEK elde edildi.
}

int main() {
	setlocale(LC_ALL,"Turkish");
	int a, b;

	printf("Bu program ile girdiðiniz iki sayýnýn OBEB ve OKEK'ini hesaplamýþ olacaksýnýz: \nLütfen ilk sayýyý giriniz: ");
	scanf("%d",&a);
	printf("Lütfen son sayýyý giriniz: ");
	scanf("%d",&b);
	/*	if( a != (int) a || b != (int) b  ) { // Keþke bu çalýþsaydý. Nereyi göremediðimi çözemedim.
		printf("Hatalý giriþ yaptýnýz!");
	} else {
		printf("EBOB: %d\n",obeb(a,b));//Ortak bölenlerin en büyüðü
		printf("EKOK: %d",okek(a,b));//Ortak katlarýn en küçüðü
	}
	 */
	printf("EBOB: %d\n",obeb(a,b));//Ortak bölenlerin en büyüðü
	printf("EKOK: %d",okek(a,b));//Ortak katlarýn en küçüðü

	return 0;
}
/*Örnek Çýktý1:
Bu program ile girdiðiniz iki sayýnýn OBEB ve OKEK'ini hesaplamýþ olacaksýnýz:
Lütfen ilk sayýyý giriniz: 15
Lütfen son sayýyý giriniz: 20
EBOB: 5
EKOK: 60
--------------------------------
Process exited after 12.45 seconds with return value 0
Press any key to continue . . .


Örnek Çýktý 2: (Harf Kontrolü olabilmeli)
Bu program ile girdiðiniz iki sayýnýn OBEB ve OKEK'ini hesaplamýþ olacaksýnýz:
Lütfen ilk sayýyý giriniz: kl
Lütfen son sayýyý giriniz: EBOB: 1
EKOK: 0
--------------------------------
Process exited after 12.16 seconds with return value 0
Press any key to continue . . .

Örnek Çýktý 3:
Bu program ile girdiðiniz iki sayýnýn OBEB ve OKEK'ini hesaplamýþ olacaksýnýz:
Lütfen ilk sayýyý giriniz: 96
Lütfen son sayýyý giriniz: 26
EBOB: 2
EKOK: 1248
--------------------------------
Process exited after 17.86 seconds with return value 0
Press any key to continue . . .


*/
