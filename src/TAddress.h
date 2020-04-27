#ifndef SRC_TADDRESS_H_
#define SRC_TADDRESS_H_
using namespace std;
#include <string>


class TAddress {
private:
	string Street;
	string Postcode;
	string Town;
public:
	TAddress();
	TAddress(string s,string p,string t);
	string getStreet();
	string getPostcode();
	string getTown();
	void setStreet(string s);
	void setPostcode(string p);
	void setTown(string t);
	void print();
};

#endif /* SRC_TADDRESS_H_ */
