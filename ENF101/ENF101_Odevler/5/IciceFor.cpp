#include <iostream>
using namespace std;
# include<stdio.h>
//5. Soru Ýçiçe
int main() {
	int i, j, kontrol = 1;
	setlocale(LC_ALL,"Turkish");
	for (i=0; i<2; i++) {
		printf("Sýnýf %d\n",i+1);
		for (j=0; j<3; j++) {
			printf("Þube  %d\n",j+1);
			kontrol++;
		}
		printf("\n");
	}

	return 0;
}
/* 
Sýnýf 1
Þube  1
Þube  2
Þube  3

Sýnýf 2
Þube  1
Þube  2
Þube  3


--------------------------------
Process exited after 0.3847 seconds with return value 0
Press any key to continue . . .*/
