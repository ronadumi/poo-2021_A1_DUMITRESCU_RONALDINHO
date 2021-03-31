#include<iostream>
using namespace std;

float operator"" _Kelvin(long double  x)
{
    float value = float(x) - 273.15;
    return value;
}
float operator"" _Fahrenheit(unsigned long long int x)
{
    return (((float)x) - 32) / 1.8;;
}
int main()
{
    float a = 300.00_Kelvin;
    float b = 120_Fahrenheit;
    cout << a << " " << b;
    return 0;
}