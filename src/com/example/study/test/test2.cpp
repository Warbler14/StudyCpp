#include <iostream>

using namespace std;

int main(void) {
    int arr[3] = {1, 2, 3};
    int(&ref)[3] = arr;

    ref[0] = 2;
    ref[1] = 3;
    ref[2] = 1;

    std::cout << arr[0] << arr[1] << arr[2] << std::endl;
    std::cout << ref[0] << ref[1] << ref[2] << std::endl;
    std::cout << *(ref+0) << *(ref+1) << *(ref+2) << std::endl;
    return 0;
}