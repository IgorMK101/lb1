#include <stdio.h>//підключення б1бліотек
#include<locale.h>
#include<math.h>


int main(void) {
	int n;
	float m;
	setlocale(LC_CTYPE, "ru");//п1дключення п1дтримки кирилиці української мови//
	printf("\nввед1ть число n=");
	scanf("%d", &n);
	m =(float) n / 60;
	printf("\t m \n");
	printf("\t %.2f \n", m);
	return 0;
}
