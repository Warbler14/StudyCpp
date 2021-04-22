#ifndef TESTLOCAL_H
#define TESTLOCAL_H

#include <iostream>

using namespace std;

class TestLocal {
public:
	void show();

	TestLocal() {
		cout << "TestLocal constructor" << endl;
		//show();	
	}

};
#endif
