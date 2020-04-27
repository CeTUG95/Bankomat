/*
 * TDate.cpp
 *
 *  Created on: 11.04.2018
 *      Author: Mehmet
 */
#include "TDate.h"

#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;

TDate::TDate() {
	time_t now;
	struct tm nowTime;
	now = time(NULL);
	nowTime = *localtime(&now);
	Day = nowTime.tm_mday;
	Month = nowTime.tm_mon + 1;
	Year = nowTime.tm_year + 1900;
}

TDate::TDate(short d,short m,short y):Day(d), Month(m),Year(y){}

TDate::~TDate() {}

void TDate::print(){
	cout << right << setfill('0') << setw(2) << Day << "." << setw(2) << Month << "." << setw(4) << Year;
}


