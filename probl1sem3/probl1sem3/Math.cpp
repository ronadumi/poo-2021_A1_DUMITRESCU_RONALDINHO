#include "Math.h"
int Math::Add(int a, int b)
{
	int s;
	s = a + b;
	return s;
}
int Math::Add(int a, int b, int c)
{
	int s;
	s = a + b + c;
	return s;
}
int Math::Add(double a, double b)
{
	return a + b;
	return 0;
}
int Math::Add(double a, double b, double c)
{
	return a + b + c;
}
int Math::Mul(int a, int b)
{
	int p;
	p = a * b;
	return p;
}
int Math::Mul(int a, int b, int c)
{
	int p;
	p = a * b * c;
	return p;
}
int Math::Mul(double a, double b)
{
	return a * b;
}
int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}
int Math::Add(int count, ...)
{
	va_list lista;
	va_start(lista, count);
	int s=0;
	for (int i = 0; i < count; i++)
		s = s + va_arg(lista, int);
	va_end(lista);
	return s;
}
char* Math::Add(const char* x, const char* y)
{
	int x1 = atoi(x);
	int x2 = atoi(y);
	int s = x1 + x2;
	cout<<s;
	return 0;
}