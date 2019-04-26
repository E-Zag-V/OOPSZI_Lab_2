﻿#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>


bool isInArea(double, double);
double f(double);

bool isInArea(double x, double y)
{
	if ((x >= -1 && x <= 1) && (y >= 0 && y <= 1))
		return true;
	else if ((x >= -1 && x <= 0) && (y >= -1 && y <= 0))
		return true;

	return false;
}

double f(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}


int main()
{
	setlocale(LC_ALL, "RUS");

	int k;
	double x, y;

	while (true)
	{
		printf("1) Перейти к демонстрации задания 1\n");
		printf("2) перейти к демонстрации задания 2\n");
		scanf("%d", &k);

		switch (k)
		{
		case 1:
		{
			printf("Введите координаты x и y:\n");
			scanf("%lf", &x);
			scanf("%lf", &y);
			printf("Результат: %o\n\n", isInArea(x, y));
			break;
		}
		case 2:
		{
			printf("Введите x:");
			scanf("%lf", &x);
			printf("Результат: %f\n\n", f(x));
			break;
		}
		default:
			return 1;
		}
	}

	return 0;
}


