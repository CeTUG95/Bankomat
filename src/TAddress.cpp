
#include "TAddress.h"

#include <string>
#include <iostream>

using namespace std;

TAddress::TAddress(){
	this->Street="";
	this->Postcode="";
	this->Town="";
}

TAddress::TAddress(string s, string p, string t):Street(s),Postcode(p),Town(t){}

string TAddress::getStreet(){
	return this->Street;
}
string TAddress::getPostcode(){
	return this->Postcode;
}
string TAddress::getTown(){
	return this->Town;
}
void TAddress::setStreet(string s){
	Street = s;
}
void TAddress::setPostcode(string p){
	Postcode = p;
}
void TAddress::setTown(string t){
	Town = t;
}
void TAddress::print(){
	cout << Street<< endl << Postcode << " " << Town;
}
