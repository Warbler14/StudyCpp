#include <iostream>
#include "../header/Test01.h"

using namespace std;

void Test01::Run() {

	cout << "!!!Hello World!!!" << endl;

	int data = 10;

	for (int a = 0; a < data; a++) {
		if (a % 2 == 0) {
			cout << "{" << a << "}";
		} else {
			cout << "[" << a << "]";
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			cout << "$";
		}
		cout << "\n";
	}

}
