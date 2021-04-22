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
//#include "../header/Test02.h"
//#include "../header/Calculator.h"

using namespace std;

class TestClass {
public:
	void run();

	TestClass() {
		cout << "TestClass constructor" << endl;
		run();
	}
};

void TestClass::run() {
	cout << "TestClass run()" << endl;
}

int main(void) {

	TestClass testClass;
	//testClass.run();

	//TestLocal test;
	//test.run();

/*
	[Running] cd "/Users/kook/workspaces/cwork/StudyCpp/src/com/example/study/classStudy/main/" && g++ main.cpp -o main && "/Users/kook/workspaces/cwork/StudyCpp/src/com/example/study/classStudy/main/"main
	Undefined symbols for architecture x86_64:
	"TestLocal::Run()", referenced from:
		_main in main-0347da.o
	ld: symbol(s) not found for architecture x86_64
	clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/

	//Test01 test01;
	/*
	test01.Run();
	*/

	/*
	Test02 test02;
	test02.Run();
	*/

	/*
	Calculator calc;
	calc.Run();
	*/

	return 0;
}
