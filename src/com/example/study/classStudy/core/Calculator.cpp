#include <iostream>
#include "../header/Calculator.h"
#include "../header/ArithmeticOperation.h"
#include "../header/Add.h"
#include "../header/Sub.h"
#include "../header/Mux.h"
#include "../header/Div.h"

using namespace std;

void Calculator::Run() {

	cout << "Calc test 1" << endl;

	int a = 10;
	int b = 3;

	Add add(a, b);
	cout << a << "+" << b << "=" << add.Process() << endl;

	Sub sub(a, b);
	cout << a << "-" << b << "=" << sub.Process() << endl;

	Mux mux(a, b);
	cout << a << "*" << b << "=" << mux.Process() << endl;

	Div div(a, b);
	cout << a << "/" << b << "=" << div.Process() << endl;

	cout << "Calc test 2" << endl;

	ArithmeticOperation ao(11, 3);
	cout << a << "+" << b << "=" << ao.add() << endl;
	cout << a << "-" << b << "=" << ao.sub() << endl;
	cout << a << "*" << b << "=" << ao.mux() << endl;
	cout << a << "/" << b << "=" << ao.div() << endl;

}
