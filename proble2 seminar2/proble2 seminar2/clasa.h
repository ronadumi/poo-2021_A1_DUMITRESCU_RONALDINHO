#pragma once
class clasa
{
private :
	char s[25];
	float math;
	float english;
	float history;
	float average;
public:
	void setname();
	char * getname();
	void setmath();
	float getmath();
	void setenglish();
	int getenglish();
	void sethistory();
	int gethistory();
	int avggrade();
};

