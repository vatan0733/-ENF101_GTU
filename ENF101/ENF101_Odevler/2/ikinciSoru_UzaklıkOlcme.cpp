#include <iostream>
using namespace std;
# include<stdio.h>
#include <math.h>
//2.Soru
int sayiGirme(int a) {
	printf("Lütfen sayýyý giriniz: ");
	scanf("%d",&a);
	return a;
}
int fark(int a, int b) {
	return a-b;
}
int kareAl(int a) {
	return pow(a,2);
}
int topla(int a, int b) {
	return a+b;
}
double karekok(double a) {
	return sqrt(a);
}

int main() { //Dört tamsayýyý okuyup U=Karekök((x_2-x_1 )^2+(y_2-y_1 )^2 )  formüle göre Uzaklýk hesaplamasý yapan program

	setlocale(LC_ALL,"Turkish");
	printf("Dört tamsayýyý okuyup U=Karekök((x_2-x_1 )^2+(y_2-y_1 )^2 )  formülüne göre Uzaklýk hesaplamasýný fonksiyonlarla yapan program çalýþmaktadýr: \n");
	int a, b, c, d;
	a = sayiGirme(a);
	b = sayiGirme(b);
	c = sayiGirme(c);
	d = sayiGirme(d);
	printf("%d-%d = %d\n", a, b, fark(a,b));
	printf("%d-%d = %d\n", c, d, fark(c,d));
	printf("(%d-%d)^2 = %d\n",a, b, kareAl(fark(a,b)));
	printf("(%d-%d)^2 = %d\n",c, d, kareAl(fark(c,d)));
	printf("(%d-%d)^2 + (%d-%d)^2 = %d\n",a, b, c, d, topla(kareAl(fark(a,b)),kareAl(fark(c,d))));
	double toplam = topla(kareAl(fark(a,b)),kareAl(fark(c,d)));
	double uzaklik = karekok(toplam);
	printf("Uzaklýk = Karekök((%d-%d)^2 + (%d-%d)^2) = %f\n",a, b, c, d, uzaklik);

	return 0;
}

/*Örnek Çýktý 1: 
Dört tamsayýyý okuyup U=Karekök((x_2-x_1 )^2+(y_2-y_1 )^2 )  formülüne göre Uzaklýk hesaplamasýný fonksiyonlarla yapan program çalýþmaktadýr:
Lütfen sayýyý giriniz: 6
Lütfen sayýyý giriniz: 8
Lütfen sayýyý giriniz: 16
Lütfen sayýyý giriniz: 10
6-8 = -2
16-10 = 6
(6-8)^2 = 4
(16-10)^2 = 36
(6-8)^2 + (16-10)^2 = 40
Uzaklýk = Karekök((6-8)^2 + (16-10)^2) = 6,324555

--------------------------------
Process exited after 11.49 seconds with return value 0
Press any key to continue . . .

Örnek Çýktý 2:
Dört tamsayýyý okuyup U=Karekök((x_2-x_1 )^2+(y_2-y_1 )^2 )  formülüne göre Uzaklýk hesaplamasýný fonksiyonlarla yapan program çalýþmaktadýr:
Lütfen sayýyý giriniz: 8
Lütfen sayýyý giriniz: 6
Lütfen sayýyý giriniz: 9
Lütfen sayýyý giriniz: 4
8-6 = 2
9-4 = 5
(8-6)^2 = 4
(9-4)^2 = 25
(8-6)^2 + (9-4)^2 = 29
Uzaklýk = Karekök((8-6)^2 + (9-4)^2) = 5,385165

--------------------------------
Process exited after 7.815 seconds with return value 0
Press any key to continue . . .

Örnek Çýktý 3:
Dört tamsayýyý okuyup U=Karekök((x_2-x_1 )^2+(y_2-y_1 )^2 )  formülüne göre Uzaklýk hesaplamasýný fonksiyonlarla yapan program çalýþmaktadýr:
Lütfen sayýyý giriniz: -5
Lütfen sayýyý giriniz: -12
Lütfen sayýyý giriniz: 7
Lütfen sayýyý giriniz: 8
-5--12 = 7
7-8 = -1
(-5--12)^2 = 49
(7-8)^2 = 1
(-5--12)^2 + (7-8)^2 = 50
Uzaklýk = Karekök((-5--12)^2 + (7-8)^2) = 7,071068

--------------------------------
Process exited after 9.748 seconds with return value 0
Press any key to continue . . .


*/
