#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define p 2.6

int main()
{
	setlocale(LC_ALL, "RUS");
	
	double x;

	printf("Введите значение x :");
	scanf("%lf", &x);
	double  a = pow(p, 3) + pow(x, 3);
	double b =exp(sqrt(p + x));
	double y = pow(b, 3) / pow(a, 2);

	printf("\nПри x=%e, y= %.2f\n", x, y);
	
	printf("задание 3\n");

	int A = (int)a;
	int B = (int)b;
	int C = (int)y;

	int cond_a = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
	int cond_b = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));
	printf("\nпроверка условий\n");
	printf("Условие а(только одно четное): %d\n", cond_a);
	printf("Условие б(все кратны 3): %d\n", cond_b);
	
	return 0;


}
