#include "drucker.h"

drucker::drucker(bankautomat* atm): atm(atm){}

drucker::drucker() {
    this->atm = NULL;
}
