#ifndef ARITHMETIC_OPERATION_H
#define ARITHMETIC_OPERATION_H

class ArithmeticOperation{

	int opt1, opt2;

	public:
		ArithmeticOperation( int num1, int num2);
				
		int add();
		int sub();
		int mux();
		int div();

};
#endif
