#pragma once
#include <iostream>
using namespace std;
class numberlist
{
	int numbers[100];
	int count;
public:
	void init();
	bool add(int x);
	void sort();
	void print();
};

