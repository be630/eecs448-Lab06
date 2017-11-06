#include "Tester.h"
Tester::Tester()
{

}
void Tester::isEmptyTest()
{
	LinkedListOfInts testList1;
	LinkedListOfInts testList2;

	std::cout << "Test 1: Testing isEmpty on an empty list\n";
	
	if(testList1.isEmpty() == true)
	{
		std::cout << "Test 1: passed\n";
	}
	else
	{
		std::cout << "Test 1: failed\n";
	}

	std::cout << "Test 2: Testing isEmpty on a list with one element (using addBack)\n";
	testList1.addBack(1);

	if(testList1.isEmpty() == true)
	{
		std::cout << "Test 2: failled\n";
	}
	else
	{
		std::cout << "Test 2: passed\n";
	}


	std::cout << "Test 3: Testing isEmpty on a list with one element (using addFront)\n";
	testList2.addFront(1);

	if(testList2.isEmpty() == true)
	{
		std::cout << "Test 3: failled\n";
	}
	else
	{
		std::cout << "Test 3: passed\n";
	}
}
void Tester::sizeTestEmptyList()
{
	LinkedListOfInts testList1;
	int size = testList1.size();
	std::cout << "Test 4: Testing size() on an empty list.\n";

	if(size != 0)
	{
		std::cout << "Test 4: failled\n";
	}
	else
	{
		std::cout << "Test 4: passed\n";
	}
}
void Tester::sizeTestPopulatedList()
{
	LinkedListOfInts testList1;
	LinkedListOfInts testList2;

	std::cout << "Test 5: Testing size() on a list of 100 elements (using add front).\n";

	for(int i = 0; i < 100; i++)
	{
		testList1.addFront(i);
		testList2.addBack(i);
	}

	if(testList1.size() != 100)
	{
		
		std::cout << "Test 5: failled\n";
	}
	else
	{
		std::cout << "Test 5: passed\n";
	}
	std::cout << "Test 6: Testing size() on a list of 100 elements (using add back).\n";
	if(testList2.size() != 100)
	{
		
		std::cout << "Test 6: failled\n";
	}
	else
	{
		std::cout << "Test 6: passed\n";
	}
}
void Tester::searchTestEmptyList()
{
	LinkedListOfInts testList;

	std::cout << "Test 7: Testing search() on an empty list.\n";

	if(testList.search(1) == true)
	{
		std::cout << "Test 7: failled\n";
	}
	else
	{
		std::cout << "Test 7: passed\n";
	}
}
void Tester::searchTestPopulatedList()
{
	LinkedListOfInts testList1;
	LinkedListOfInts testList2;

	for(int i = 0; i < 100; i++)
	{
		testList1.addFront(i);
		testList2.addBack(i);
	}

	std::cout << "Test 8: Testing search() on a list with 100 elements (using addFront).\n";

	if(testList1.search(20) == true)//just picked a random number....
	{
		std::cout << "Test 8: passed\n";
	}
	else
	{
		std::cout << "Test 8: failed\n";
	}

	std::cout << "Test 9: Testing search() on a list with 100 elements (using addBack).\n";

	if(testList2.search(20) == true)//just picked a random number....
	{
		std::cout << "Test 9: passed\n";
	}
	else
	{
		std::cout << "Test 9: failed\n";
	}
}
void Tester::addFrontTestOrder()
{
	LinkedListOfInts testList;
	bool passFlag = true;
	std::vector<int> expectedVector;
	
	std::cout << "Test 10: Testing addFront() order on 10 element list.\n";

	for(int i = 1, j = 11; i < 11; i++, j--)
	{
		testList.addFront(i);
		expectedVector.push_back(j-1);
	}

	std::vector<int> testVector = testList.toVector();
	std::cout << "List we populated: ";
	for(int i = 0, j = 10; i < 10; i++, j--)
	{
		if(testVector[i] != j)//test if order is correct
		{
			passFlag = false;
		}
		std::cout << testVector[i] << " ";
	}
	std::cout << "\nList we expected: ";
	for(int i = 1; i < 11; i++)
	{
		std::cout << expectedVector[i-1] << " ";
	}
	if(passFlag == true)
	{
		std::cout << "\nTest 10: passed\n";
	}
	else
	{
		std::cout << "Test 10: failed\n";
	}
}
void Tester::addBackTestOrder()
{
	LinkedListOfInts testList;
	bool passFlag = true;
	std::vector<int> expectedVector;

	std::cout << "Test 11: Testing addBack() order on 10 element list.\n";

	for(int i = 1; i < 11; i++)
	{
		testList.addBack(i);
		expectedVector.push_back(i);
	}

	std::vector<int> testVector = testList.toVector();
	std::cout << "List we populated: ";
	for(int i = 0; i < 10; i++)
	{
		if(testVector[i] != (i + 1))//test if order is correct
		{
			passFlag = false;
		}
		std::cout << testVector[i] << " ";
	}
	std::cout << "\nList we expected: ";
	for(int i = 1; i < 11; i++)
	{
		std::cout << expectedVector[i-1] << " ";
	}
	if(passFlag == true)
	{
		std::cout << "\nTest 11: passed\n";
	}
	else
	{
		std::cout << "\nTest 11: failed\n";
	}
}
void Tester::removeFrontTest()
{
	LinkedListOfInts testList;
	bool passFlag = true;

	std::cout << "Test 12: Testing removeFront() on 10 element list.\n";

	for(int i = 1; i < 11; i++)
	{
		testList.addBack(i);
	}
	std::cout << "List before removeFront() used 5 times: 10 9 8 7 6 5 4 3 2 1\n";
	for(int i = 1; i < 6; i++)
	{
		testList.removeFront();
	}
	std::vector<int> testVector = testList.toVector();
	std::cout << "List after removeFront() used 5 times: ";
	for(int i = 0, j = 5; i < 5; i++, j--)
	{
		if(testVector[i] != j)
		{
			passFlag = false;
		}
		std::cout << testVector[i] << " ";
	}

	std::cout << "\nList we expected after removes: 5 4 3 2 1";

	if(passFlag == true)
	{
		std::cout << "\nTest 12: passed\n";
	}
	else
	{
		std::cout << "\nTest 12: failed\n";
	}

}
void Tester::removeBackTest()
{
	LinkedListOfInts testList;
	bool passFlag = true;

	std::cout << "Test 13: Testing removeBack() on 10 element list.\n";

	for(int i = 1; i < 11; i++)
	{
		testList.addBack(i);
	}
	std::cout << "List before removeBack() used 5 times: 10 9 8 7 6 5 4 3 2 1\n";
	for(int i = 1; i < 6; i++)
	{
		testList.removeBack();
	}
	std::vector<int> testVector = testList.toVector();
	std::cout << "List after removeBack() used 5 times: ";
	for(int i = 0, j = 10; i < 5; i++, j--)
	{
		if(testVector[i] != j)
		{
			passFlag = false;
		}
		std::cout << testVector[i] << " ";
	}

	std::cout << "\nList we expected after removes: 10 9 8 7 6";

	if(passFlag == true)
	{
		std::cout << "\nTest 13: passed\n";
	}
	else
	{
		std::cout << "\nTest 13: failed\n";
	}

}
void Tester::runTests()
{
	isEmptyTest();
	sizeTestEmptyList();
	sizeTestPopulatedList();
	searchTestEmptyList();
	searchTestPopulatedList();
	addFrontTestOrder();
	addBackTestOrder();
	removeFrontTest();
	removeBackTest();
}










