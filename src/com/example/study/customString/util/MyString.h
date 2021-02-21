/*
 * MyString.h
 *
 *  Created on: 2019. 3. 16.
 *      Author: insung
 */

#ifndef COM_STUDY_UTIL_MYSTRING_H_
#define COM_STUDY_UTIL_MYSTRING_H_

class MyString {
public:
	MyString();

	MyString(const char *str);

	char* GetStrData();

	int GetLen();

	virtual ~MyString();

private:
	char *strData;
	int len;
};

#endif /* COM_STUDY_UTIL_MYSTRING_H_ */
