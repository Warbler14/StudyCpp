//============================================================================
// Name        : 
// Author      : 
// Version     :
// Copyright   : 
// Description : 
//============================================================================
#include <iostream>
#include "TestLocal.h"
#include "../header/Test01.h"
#include "../header/Test02.h"
#include "../header/Calculator.h"

using namespace std;

class TestClassOnMain {
public:
	void run(const char * messages);

	TestClassOnMain() {
		cout << "TestClassOnMain constructor" << endl;
		run("on consructor");
	}
};

void TestClassOnMain::run(const char * messages) {
	cout << "TestClassOnMain run() " << messages <<endl;
}

// void TestLocal::show() {
// 	cout << "!!!Test Local!!!" << endl;
// }

int main(void) {
	//TODO  run code 에 대한 이해, makefile 만들어 실행



	//cout << "Hello World" << endl;

	//g++ main.cpp -o main && ./main
	TestClassOnMain testClass;
	testClass.run("on main");

	//g++ main.cpp TestLocal.cpp -o main && ./main
	//TestLocal test;
	//test.show();

	//g++ main.cpp ../core/Test01.cpp -o main && ./main
	//Test01 test01;	
	//test01.Run();
	

	//g++ main.cpp ../core/Test02.cpp -o main && ./main
	//Test02 test02;
	//test02.Run();
	

	//g++ main.cpp ../core/*.cpp -o main && ./main	
	//Calculator calc;
	//calc.Run();

	/*
	d 
	"/Users/kook/workspaces/cwork/StudyCpp/src/com/example/study/classStudy/main/" 
	&& g++ main.cpp -o main 
	&& "/Users/kook/workspaces/cwork/StudyCpp/src/com/example/study/classStudy/main/"main

	*/

	return 0;
}
