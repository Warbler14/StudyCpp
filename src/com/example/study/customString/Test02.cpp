//============================================================================
// Name        : Test02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "./util/MyString.h"
#include "./util/Print.h"
#include "./util/StringUtil.h"
using namespace std;

int main() {

	MyString str("If you do not walk today, you will have to run tomorrow.");

	/*
	cout << "value : " << str.GetStrData() << endl;
	cout << "size : " << str.GetLen() << endl;

	Print print1("There is no royal road to learning.");
	print1.out();

	Print printer;
	printer.out("study hard and fun");
	printer.out("The beginning is half of the whole");
	printer.end();

	StringUtil stringUtil;
	char *s1 = (char*)stringUtil.allocMemory(100);
	const char * word = "Hello, world!";
	stringUtil.copy(s1, word);
	printer.out(s1);
	*/

	return 0;
}
