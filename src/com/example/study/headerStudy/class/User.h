/*
 * User.h
 *
 *  Created on: 2020. 5. 2.
 *      Author: insung
 */

#ifndef CLASS_USER_H_
#define CLASS_USER_H_

#include <string>
#include "Lamp.h"

using namespace std;
using namespace lamp;

namespace user {

class User {
private:
//	string m_name;

public:
	void turnOnOff(Lamp& lamp);
	void changeLight(Lamp& lamp);
	void showIlluminance(Lamp& lamp);

};

} /* namespace user */

#endif /* CLASS_USER_H_ */
