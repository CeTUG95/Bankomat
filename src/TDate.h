#ifndef TDATE_H_
#define TDATE_H_

class TDate {
private:
	short Day;
	short Month;
	short Year;
public:
	TDate();
	TDate(short d,short m,short y);
	void print();
	virtual ~TDate();
};

#endif /* TDATE_H_ */
