#ifndef __POWER__H
#define __POWER__H

#include <vector>
#include "Professor/Counter.h"

using namespace std;

/**
 * This class serves as a look up table for the list of powers of a certain order
 */
class Power {
public:
   	//Constructor
	Power() {};

	//getter for the list of powers of a certain order
	const vector<vector<int>> getPowerOfOrder(const int order);

   	void setDim(const size_t size) {n = size;}

	void clearAll() {_powerlist.clear();}
private:

	//setter for the list of powers of a new order
	void setPowerOfOrder(const int order);

	//list of lists of powers of certain orders
	vector<vector<vector<int>>> _powerlist;
	
	//dimension of the polynom
	size_t n;

};
#endif
