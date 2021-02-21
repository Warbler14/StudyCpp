/*
 * Lamp.cpp
 *
 *  Created on: 2020. 5. 2.
 *      Author: insung
 */

#include "Lamp.h"
#include <iostream>

using namespace std;

namespace lamp {

void  Lamp::powerOnOff(){
	m_isOn = !m_isOn;
}

void Lamp::changeLight(){
	if(m_isOn){
		if(m_illuminance < 3){
			m_illuminance++;
		} else {
			m_illuminance = 1;
		}
	}
}

void Lamp::showIlluminance(){
	if(m_isOn){
		cout << "밝기 : " << m_illuminance << endl;
	} else {
		cout << "꺼짐" << endl;
	}

}



} /* namespace lamp */
