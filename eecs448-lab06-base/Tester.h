#ifndef TESTER_H
#define TESTER_H

#include "LinkedListOfInts.h"

class Tester
{
	public:

	Tester();


	void isEmptyTest();//will test isEmpty() with a few different situations.
	void sizeTestEmptyList();
	void sizeTestPopulatedList();
	void searchTestEmptyList();
	void searchTestPopulatedList();
	void addFrontTestOrder();
	void addBackTestOrder();
	void removeFrontTest();
	void removeBackTest();
	void removeSizeTest();
	void removeBoolReturnCheck();

	void runTests();
};
#endif
