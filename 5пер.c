#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846

double f(double a, double b);

int main()
{
	system("chcp 65001");
	double a, b;
	scanf("%lf%lf", &a,&b);
	
	printf("Результат: f(a,b) %.3lf", f(a, b));

	//double gr;

	//printf("Введите угол в градусах:");
	//scanf("%lf", &gr);

	//double rad = gr * M_PI / 180.0;
	//double result = sin(rad);

	//printf("Рузультат синус %.1f град = %.6f\n", gr, result);
	return 0;
	
}

double f(double a, double b) {
	double chislitel, znamenatel, drob;
	chislitel = sqrt(a + sin(b)) - 4 * a * b;
	znamenatel = log(a);
	drob = chislitel / znamenatel;
	return drob;
}