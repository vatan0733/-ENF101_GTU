#include <iostream>
using namespace std;
# include<stdio.h>
int main() { //Bir döngüyle 7 sayýsýndan baþlayýp 80'e kadar olan sayýlarý üçer arttýran ve elde edilen bu sayýlarýn toplamýný bulan program
	int i, toplam = 0;
	setlocale(LC_ALL,"Turkish");

	printf("7'den baþlayýp 80'e kadar olan sayýlarý üçer arttýran ve elde edilen bu sayýlarýn toplamýný bulan program çalýþmaktadýr: \n");
	for (i=7; i<80; i+=3) { //80'e kadar dediði için 80 dahil edilmedi.
		printf("%d\n",i);
		toplam += i;
	}
	printf("Toplam = %d",&toplam);
	return 0;
}

/* Örnek Çýktýsý: 7'den baþlayýp 80'e kadar olan sayýlarý üçer arttýran ve elde edilen bu sayýlarýn toplamýný bulan program çalýþmaktadýr:
7
10
13
16
19
22
25
28
31
34
37
40
43
46
49
52
55
58
61
64
67
70
73
76
79
Toplam = 7339544
--------------------------------
Process exited after 0.1637 seconds with return value 0
Press any key to continue . . . */
