#include "globalfunctions.h"
#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
int cmpname(clasa x1, clasa x2)
{
	if (strcmp(x1.getname(), x2.getname())==0)
		return 0;
	if (strcmp(x1.getname(), x2.getname()) > 0)
		return 1;
	return -1;
}
int cmpmath(clasa x1,clasa x2)
{
    if (x1.getmath() == x2.getmath())
        return 0;
    if (x1.getmath() > x2.getmath())
        return 1;
    else
        return -1;
}
int cmphistory(clasa x1, clasa x2)
{
    if (x1.gethistory() == x2.gethistory())
        return 0;
    if (x1.gethistory() > x2.gethistory())
        return 1;
    else
        return -1;
}
int cmpenglish(clasa x1, clasa x2)
{
    if (x1.getenglish() == x2.getenglish())
        return 0;
    if (x1.getenglish() > x2.getenglish())
        return 1;
    else
        return -1;
}
int cmpaverage(clasa x1, clasa x2)
{
    if (x1.avggrade() == x2.avggrade())
        return 0;
    if (x1.avggrade() > x2.avggrade())
        return 1;
    else
        return -1;
}


