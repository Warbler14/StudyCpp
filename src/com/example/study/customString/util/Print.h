/*
 * Print.h
 *
 *  Created on: 2019. 12. 13.
 *      Author: insung
 */

#ifndef COM_STUDY_UTIL_PRINT_H_
#define COM_STUDY_UTIL_PRINT_H_

class Print {
public:
	Print();

	Print(const char *str);

	void out();

	void out(const char *str);

	void end();

	virtual ~Print();

private:
	char *strData;
	int len;

	void set(const char *str);
};



#endif /* COM_STUDY_UTIL_PRINT_H_ */
