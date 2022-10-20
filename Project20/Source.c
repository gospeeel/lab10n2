#define _CRT_SECURE_NO_DEPRECATE
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>


// здесь начинаетс€ решение второго подпунка
double sin_n(double x, int N);
void main()
{
	double x = 0, s = 0;
	int N = 0;
	setlocale(LC_ALL, "RUS");
	printf("sin(x)= x - x^3/3! + x^5/5! + x^7/7! + ... (-1)^(k-1) * x^2k-1/(2k-1)!\n");
	printf("¬ведите x:\n");
	scanf("%lf", &x);
	s = sin(x);
	s = x - pow(x, 3) / Factorial(3) + pow(x, 5) / Factorial(5) - pow(x, 7) / Factorial(7) + sin_n(x, N);
	printf("sin(x) = %6.5lf", s);
}

double sin_n(double x, int N)
{
	double z;
	int k = 1;
	z = pow(-1, k - 1) * pow(x, 2*k - 1) / Factorial(2*k-1);
	return 0;
}
int Factorial(unsigned N)
{
	int result = 1;
	for (unsigned i = 1; i < N + 1; i++) result *= i;
	return result;
}
//здесь заканчиваетс€ решение второго пп

//здесь начинаетс€ решение первого пп
//void main()
//{
//setlocale(LC_ALL, "RUS");
//double x,s;
//scanf("%lf", &x);
//s=sin(x);
//printf("результат: %lf", s);
// «десь заканчиваетс€ решение первого пп
//}
// 
// здесь начинаетс€ решение третьего пп
//double ryad(double x, int n);

//void main(void)
//{
	//int eps;
	//double x;
	//setlocale(LC_ALL, "rus");
	//printf("¬ведите x:\n");
	//scanf("%lf", &x);
	//printf("¬ведите точность определени€:\n");
	//scanf("%d", &eps);
	//printf(" arcctg = %f", (M_PI / 2) + ryad(x, eps));
//}

//double ryad(double x, int eps)
//{
	//double z = 0;
	//int n = 0;
	//for (; n < eps && fabs(x) <= 1; n++)
	//{
		//z = z + ((pow(-1, n + 1) * pow(x, 2 * n + 1)) / (2 * n + 1));
	//}
	//return z;
//}
//здесь заканчиваетс€ решение третьего пп