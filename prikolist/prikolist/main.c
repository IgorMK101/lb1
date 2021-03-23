#include <stdio.h>//підключення б1бліотек
#include<locale.h>
#include<math.h>


int main(void) {
	int n;
	int m;
	int h;
	setlocale(LC_CTYPE, "ru");//п1дключення п1дтримки кирилиці української мови//
	printf("\nввед1ть число n=");
	scanf("%d", &n);
	m = n / 60;
	h = n / 3600;
	printf("\t m \t h \n");
	printf("\t%d\t%d\n", m, h);
	return 0;
}
