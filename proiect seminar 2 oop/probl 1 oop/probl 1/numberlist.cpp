#include "numberlist.h"
void numberlist::init()
{
	this->count = 0;
}
void numberlist::print()
{
	for (int i = 1; i <= count; i++)
		cout << numbers[i] << " ";
}
bool numberlist::add(int x)
{
	if (count >= 10)
		return false;
	else
	{
		count++;
		numbers[count] = x;
	}
	return true;
}
void numberlist::sort()
{
	for (int i = 0; i < count; i++)
		for (int j = i; j <= count; j++)
			if (numbers[i] > numbers[j])
				swap(numbers[i], numbers[j]);
}
