#include "../header/Mux.h"

Mux::Mux(int a, int b) {
	opt1 = a;
	opt2 = b;
}

int Mux::Process() {
	return opt1 * opt2;
}
