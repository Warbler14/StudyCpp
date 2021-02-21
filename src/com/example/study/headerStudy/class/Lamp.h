/*
 * Lamp.h
 *
 *  Created on: 2020. 5. 2.
 *      Author: insung
 */

#ifndef CLASS_LAMP_H_
#define CLASS_LAMP_H_

namespace lamp {

class Lamp {
private:
	bool m_isOn = false;
	int  m_illuminance;

public:
	void powerOnOff();
	void changeLight();
	void showIlluminance();
};

} /* namespace lamp */

#endif /* CLASS_LAMP_H_ */
