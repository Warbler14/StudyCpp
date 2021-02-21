#include "../header/ArithmeticOperation.h"

ArithmeticOperation::ArithmeticOperation(int a, int b) {
	opt1 = a;
	opt2 = b;
}

int ArithmeticOperation::add() {
	return opt1 + opt2;
}

int ArithmeticOperation::sub() {
	return opt1 - opt2;
}

int ArithmeticOperation::mux() {
	return opt1 * opt2;
}

int ArithmeticOperation::div() {
	return opt1 / opt2;
}
