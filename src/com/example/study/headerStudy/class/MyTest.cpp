/*
 * MyTest.cpp
 *
 *  Created on: 2020. 5. 2.
 *      Author: insung
 */

#include "MyTest.h"

#include <iostream>

using namespace std;

namespace myTest {

MyTest::MyTest() {
	cout << "constructor" << endl;

	cout << "number : " << number << endl;
	number = 101;
	cout << "number : " << number << endl;

}



MyTest::~MyTest() {
	cout << "destructor" << endl;

}

} /* namespace myTest */
