/*
 * StringUtil.h
 *
 *  Created on: 2019. 12. 14.
 *      Author: insung
 */

#ifndef COM_STUDY_UTIL_STRINGUTIL_H_
#define COM_STUDY_UTIL_STRINGUTIL_H_

class StringUtil{
public:
	StringUtil();

	void* allocMemory(int size) ;

	void copy(char *dest, const char *constChar);

};


#endif /* COM_STUDY_UTIL_STRINGUTIL_H_ */
