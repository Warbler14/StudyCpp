/*
 * User.cpp
 *
 *  Created on: 2020. 5. 2.
 *      Author: insung
 */

#include "User.h"
#include <iostream>

using namespace std;

namespace user {

void User::turnOnOff(Lamp& lamp){

	lamp.powerOnOff();

}

void User::changeLight(Lamp& lamp){

	lamp.changeLight();

}

void User::User::showIlluminance(Lamp& lamp){

	lamp.showIlluminance();

}

} /* namespace user */
