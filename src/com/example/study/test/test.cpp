#include <iostream>

using namespace std;

// https://code.visualstudio.com/docs/languages/cpp
void change_val(int *p, int val) {
    *p = val;
}

int main(void) {
    std::cout << "Hello, World!!" << std::endl;
    cout << "Hello\n";

    int i;

    for (i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    int number = 5;
    change_val(&number, 10);
    cout << number;

    cout << "\nend";

    return 0;
}