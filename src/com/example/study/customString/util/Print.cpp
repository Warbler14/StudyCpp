/*
 * Print.cpp
 *
 *  Created on: 2019. 12. 13.
 *      Author: insung
 */

#include <iostream>
#include <string.h>

#include "../util/Print.h"

using namespace std;

Print::Print(){
	strData = '\0';
	len = 0;
}

Print::Print(const char *str){
	set(str);
}

void Print::out(){
	cout << strData << endl;
}

void Print::out(const char *str){
	set(str);
	out();
	end();
}

void Print::set(const char *str){
	len = strlen(str);
	strData = new char[len + 1];
	strcpy(strData, str);
}

void Print::end(){
	delete strData;
}

Print::~Print(){

}
