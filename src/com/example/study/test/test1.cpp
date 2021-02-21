#include <iostream>

using namespace std;



int main(void) {
    int x;
    int& y = x;
    int& z = y;

    x = 1;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
    std::cout << &x << std::endl;
    std::cout << &y << std::endl;
    std::cout << &z << std::endl;

    y = 2;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
    std::cout << &x << std::endl;
    std::cout << &y << std::endl;
    std::cout << &z << std::endl;

    z = 3;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
    std::cout << &x << std::endl;
    std::cout << &y << std::endl;
    std::cout << &z << std::endl;

    const int &ref = 100;
    std::cout << ref << std::endl;
}