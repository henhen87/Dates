#include "stdafx.h"

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#include "date.h"


void setDateValues(string&, int&, int&);
int main()
{
	string mth;
	int  day, yr;

	setDateValues(mth, day, yr);
	transform(mth.begin(), mth.end(), mth.begin(), (int(*) (int)) tolower);
	
	Date d1(mth, day, yr);
	cout << "Date is:\n";
	DateFormat type;
	type = mdy1;
	d1.print(type);
	type = mdy2;
	d1.print(type);
	type = ymd1;
	d1.print(type);
	type = ymd2;
	d1.print(type);
	return 0;
}

void setDateValues(string & m, int& d, int& y)
{
	cout << "Enter month: ";
	cin >> m;
	cout << "Enter day: ";
	cin >> d;
	cout << "Enter year: ";
	cin >> y;
}

