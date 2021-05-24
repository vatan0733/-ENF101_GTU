#include <iostream>
using namespace std;
# include<stdio.h>
//6. Soru 
int main() { //1'den 100'e kadar olan sayýlardaki 5 ve 5'in katlarýný bulan program.
	int i, j;
	setlocale(LC_ALL,"Turkish"); //Çýktýlarýn Türkçe karakter gelmesini saðlar.
	printf("1'den 100'e kadar olan sayýlardaki 5 ve 5'in katlarýný bulan program çalýþmaktadýr: \n");
	for (i=1; i<100; i++) { //100'e kadar dediði için 100 dahil edilmedi
		if(i%5==0) {
			printf("%d\n",i);
		}
	}
	return 0;
}
/* 1'den 100'e kadar olan sayýlardaki 5 ve 5'in katlarýný bulan program çalýþmaktadýr:
5
10
15
20
25
30
35
40
45
50
55
60
65
70
75
80
85
90
95

--------------------------------
Process exited after 0.08566 seconds with return value 0
Press any key to continue . . .
 */
