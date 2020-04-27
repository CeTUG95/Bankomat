#ifndef TTIME_H_
#define TTIME_H_

class TTime {
private:
	short Hour;
	short Minute;
	short Second;
public:
	TTime(short h,short m,short s=0);
	TTime();
	void print();

};

#endif /* TTIME_H_ */
