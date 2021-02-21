#include "./header/Exec01.h"
#include "./header/Exec02.h"
#include "./header/Exec03.h"
#include "./header/Exec04.h"
#include "./header/Exec05.h"

#include "./class/MyTest.h"
#include "./class/Lamp.h"
#include "./class/User.h"

//#include <iostream>
//using namespace std;

int val = 100;

namespace A_COM {
	void function(void){
		cout<<"A_COM function"<<endl;
	}

}

namespace B_COM {
	void function(void){
		cout<<"B_COM function"<<endl;
	}

}

using A_COM::function;
using B_COM::function;

void test01(){
	int val = 101;

	std::cout <<  ::val << std::endl;
	std::cout <<  val << std::endl;

	A_COM::function();
	B_COM::function();
	C_COM::function();
	C_COM::function(10);
	C_COM::gugudan();
	C_COM::gugudanRange();
}

void test02(){
//	EXEC_02::getlineTest();
//	EXEC_02::stringstreamTest();
//	EXEC_02::stringstreamTest2();
//	EXEC_02::arrayTest01();
//	EXEC_02::arrayTest02();
//	EXEC_02::randomTest();
	EXEC_02::histogramTest();
}

using namespace EXEC_03;

void test03(){
//	EXEC_03::test();
//	EXEC_03::tenTenBox01();
//	EXEC_03::tenTenBox02();
	reservationTest();
}

using namespace EXEC_04;

void test04(){
//	sortTest1();
	sortTest2();
}

using namespace EXEC_05;

void test05(){
	fileTest();

	myTest::MyTest p;
////	MyTest p = MyTest();
	int number = p.getNumber();
	std::cout <<  number << std::endl;
}

void test06(){
	lamp::Lamp lamp;
	lamp.powerOnOff();
	lamp.changeLight();
	lamp.changeLight();
	lamp.showIlluminance();
	lamp.powerOnOff();
	lamp.showIlluminance();

}

void test07(){
	lamp::Lamp lamp;
	user::User user;

	user.turnOnOff(lamp);
	user.changeLight(lamp);
	user.showIlluminance(lamp);
	user.turnOnOff(lamp);
	user.showIlluminance(lamp);

}

int main() {

	test01();
//	test02();
//	test03();
//	test04();
//	strTest();
//	pSwapTest();
//	refSwapTest();
//	viewArrayTest();
//	view2DArrayStrTest();
//	idCheckTest1();
//	dynamicValueTest();
//	test05();
//	test06();
//	test07();


	return 0;
}
