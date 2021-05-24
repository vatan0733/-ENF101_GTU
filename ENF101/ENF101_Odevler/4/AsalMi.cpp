#include <iostream>
using namespace std;
# include<stdio.h>
#include <conio.h>
int main() { //4. Soru Klavyeden girilen sayýnýn asal olup olmadýðýný bulan program.
// 43. satýrdan itibaren örnek çýktýlar mevcuttur.
// Hazal_Kayiket_200114014025
	int sayi;
	bool asalMi = true;
	setlocale(LC_ALL,"Turkish");
basa:
	printf("Klavyeden girilen sayýnýn asal olup olmadýðýný bulan program çalýþmaktadýr: \nLütfen asal olup olmadýðýný öðrenmek istediðiniz 1'den büyük sayýyý giriniz: ");
	scanf("%d",&sayi);

	if (sayi == 1 ) {
		printf("%d asal deðildir.",sayi);
		printf("Yeniden giriþ yapmanýz için baþlangýca yönlendiriliyorsunuz.");
		goto basa;
	}
	if (sayi < 1) {
		printf("Geçersiz giriþ!");
		printf("Yeniden giriþ yapmanýz için baþlangýca yönlendiriliyorsunuz.");
		goto basa;
	}

	if( sayi >1) {


		for (int i = 2; i < sayi; i++) {
			if(sayi % i == 0) {
				asalMi = false;
			}
		}

		if(asalMi) {
			printf("Sayý asaldýr.");
		} else {
			printf("Sayý asal deðildir.");
		}
	}
}

/* Örnek Çýktý 1: 

Klavyeden girilen sayýnýn asal olup olmadýðýný bulan program çalýþmaktadýr:
Lütfen asal olup olmadýðýný öðrenmek istediðiniz 1'den büyük sayýyý giriniz: 47
Sayý asaldýr.
--------------------------------
Process exited after 6.549 seconds with return value 0
Press any key to continue . . .


Örnek Çýktý 2: 

Klavyeden girilen sayýnýn asal olup olmadýðýný bulan program çalýþmaktadýr:
Lütfen asal olup olmadýðýný öðrenmek istediðiniz 1'den büyük sayýyý giriniz: 2
Sayý asaldýr.
--------------------------------
Process exited after 2.649 seconds with return value 0
Press any key to continue . . .

Örnek Çýktý 3: 

Klavyeden girilen sayýnýn asal olup olmadýðýný bulan program çalýþmaktadýr:
Lütfen asal olup olmadýðýný öðrenmek istediðiniz 1'den büyük sayýyý giriniz: -9
Geçersiz giriþ!Yeniden giriþ yapmanýz için baþlangýca yönlendiriliyorsunuz.Klavyeden girilen sayýnýn asal olup olmadýðýný bulan program çalýþmaktadýr:
Lütfen asal olup olmadýðýný öðrenmek istediðiniz 1'den büyük sayýyý giriniz: 27
Sayý asal deðildir.
--------------------------------
Process exited after 14.84 seconds with return value 0
Press any key to continue . . .
*/


