#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>

int task_1();
int task_2();
int task_3();

int main()
{
	task_1();
	task_2();
	task_3();
}

int task_1()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	int year;
	puts("Введите год: ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d - високосный год", year);
	}
	else
	{
		printf("%d - год не високосный", year);
	}
}

int task_2()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	//Контрольный пример:
	// 1) Условие x <= 2. Возьмем x = 1.
	//F(1) = 1 * 1 + 4 * 1 + 5 = 1 + 4 + 5 = 10.
	//2) Условие x > 2. Возьмем x = 3.
	//F(3) = 1 / (3 * 3 + 4 * 3 + 5) = 1 / (9 + 12 + 5) = 1 / 26 ≈ 0.0385.

	double x;
	puts("Введите x: ");
	scanf("%lf", &x);
	printf("x = %f, F(x) = %f\n", x, (x <= 2) ? (x * x + 4 * x + 5) : (1.0 / (x * x + 4 * x + 5)));
	
}

int task_3()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	int ch;
	puts("Введите шестизначное число: ");
	scanf("%d", &ch);
	int c1 = ch / 100000;
	int c2 = (ch / 10000) % 10;
	int c3 = (ch / 1000) % 10;
	int c4 = (ch / 100) % 10;
	int c5 = (ch / 10) % 10;
	int c6 = ch % 10;
	int sum1 = c1 + c2 + c3;
	int sum2 = c4 + c5 + c6;
	if ( sum1==sum2 )
	{
		printf("%d - счастливое число", ch);
	}
	else
	{
		printf("%d - не является счастливым числом", ch);
	}
 }
