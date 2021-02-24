#pragma once
#include "numberlist.h"

int main()
{
	numberlist d1;
	d1.init();
	int x;
	cin >> x;
	while (d1.add(x))
		cin >> x;
	d1.sort();
	d1.print();
	return 0;
}
