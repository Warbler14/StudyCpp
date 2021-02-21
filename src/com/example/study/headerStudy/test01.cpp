#include <iostream> 
#include "./header/Exec01.h"

#include "./class/Lamp.h"
#include "./class/User.h"


using namespace std;

int main() 
{ 
    cout << "Never fear, C++ is here!\n";

    //C_COM::function();
    C_COM::function();
	C_COM::function(10);
	C_COM::gugudan();

	/*
    lamp::Lamp lamp;
	lamp.powerOnOff();
	lamp.changeLight();
	lamp.changeLight();
	lamp.showIlluminance();
	lamp.powerOnOff();
	lamp.showIlluminance();
	*/

    return 0;
}