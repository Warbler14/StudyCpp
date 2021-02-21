#include "../header/Sub.h"

Sub::Sub(int a, int b) {
	opt1 = a;
	opt2 = b;
}

int Sub::Process() {
	return opt1 - opt2;
}
