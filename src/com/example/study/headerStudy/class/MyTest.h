/*
 * MyTest.h
 *
 *  Created on: 2020. 5. 2.
 *      Author: insung
 */

#ifndef CLASS_MYTEST_H_
#define CLASS_MYTEST_H_

namespace myTest {

class MyTest {
private:
	int number = 100;

public:
	MyTest();

	int getNumber(){
		return number;
	}

	virtual ~MyTest();
};

} /* namespace myTest */

#endif /* CLASS_MYTEST_H_ */
