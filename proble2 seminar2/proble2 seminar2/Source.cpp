#include "clasa.h"
#include "globalfunctions.h"
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	clasa s1;
	clasa s2;
	s1.setname();
	s1.setmath();
	s1.setenglish();
	s1.sethistory();
	s2.setname();
	s2.setmath();
	s2.setenglish();
	s2.sethistory();
	cout << cmpname(s1, s2);
}