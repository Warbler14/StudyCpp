#include "../header/Div.h"

Div::Div(int a, int b) {
	opt1 = a;
	opt2 = b;
}

int Div::Process() {
	return opt1 / opt2;
}
