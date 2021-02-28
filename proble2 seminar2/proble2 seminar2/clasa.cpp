#include "clasa.h"
#include <iostream>
#include <cstring>
using namespace std;
void clasa::setname()
{
    char y[25];
	cin >> y;
	strcpy_s(s, y);
}
char* clasa::getname()
{
	return s;
}
void clasa::setmath()
{
	float x;
	cout << "mate:";
	cin >> x;
		if (x > 1 && x < 10)
			math = x;
}
float clasa::getmath()
{
	return math;
}
void clasa::setenglish()
{
	float x;
	cout << "english:";
	cin >> x;
	if (x > 1 && x < 10)
		english = x;
}
int clasa::getenglish()
{
	return english;
}
void clasa::sethistory()
{
	float x;
	cout << "istorie:";
	cin >> x;
	if (x > 1 && x < 10)
		history = x;
}
int clasa::gethistory()
{
	return history;
}
int clasa::avggrade()
{
	float x;
	x = math + english + history / 3.0;
	average = x;
	return average;
}