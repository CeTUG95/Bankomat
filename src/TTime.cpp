#include "TTime.h"

#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;

TTime::TTime() {
	time_t now;
	struct tm nowTime;
	now = time(NULL);
	nowTime = *localtime(&now);
	Hour = nowTime.tm_hour;
	Minute = nowTime.tm_min;
	Second = nowTime.tm_sec;
}

TTime::TTime(short h,short m,short s):Hour(h),Minute(m),Second(s){}


void TTime::print(){
		if(Second==0) cout << right << setfill('0') << setw(2) << Hour << ":" << setw(2) << Minute;
		else cout << right << setfill('0') << setw(2) << Hour << ":" << setw(2) << Minute << ":" << setw(2) << Second;
	};
