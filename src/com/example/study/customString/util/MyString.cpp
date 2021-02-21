/*
 * MyString.cpp
 *
 *  Created on: 2019. 3. 16.
 *      Author: insung
 */

#include <iostream>
#include <string.h>

#include "MyString.h"

using namespace std;

MyString::MyString() {
	strData = '\0';
	len = 0;
}

MyString::MyString(const char *str) {
	len = strlen(str);
	strData = new char[len + 1];
	strcpy(strData, str);

}

char *MyString::GetStrData() {
	return strData;
}

int MyString::GetLen() {
	return len;
}

MyString::~MyString() {
	// TODO Auto-generated destructor stub
}

