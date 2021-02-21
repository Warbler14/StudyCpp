#include "../header/Add.h"

Add::Add(int a, int b) {
	opt1 = a;
	opt2 = b;
}

int Add::Process() {
	return opt1 + opt2;
}
