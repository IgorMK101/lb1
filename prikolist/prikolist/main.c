#include <stdio.h>//���������� �1������
#include<locale.h>
#include<math.h>


int main(void) {
	int n;
	int m;
	int h;
	setlocale(LC_CTYPE, "ru");//�1��������� �1������� �������� ��������� ����//
	printf("\n����1�� ����� n=");
	scanf("%d", &n);
	m = n / 60;
	h = n / 3600;
	printf("\t m \t h \n");
	printf("\t%d\t%d\n", m, h);
	return 0;
}