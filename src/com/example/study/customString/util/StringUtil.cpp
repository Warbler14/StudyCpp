/*
 * StringUtil.cpp
 *
 *  Created on: 2019. 12. 14.
 *      Author: insung
 */

#include <stdio.h>
#include <stdlib.h>	// malloc, free 함수가 선언된 헤더 파일
#include <string.h>	// strcpy 함수가 선언된 헤더 파일

#include "../util/StringUtil.h"

StringUtil::StringUtil(){

}


void* StringUtil::allocMemory(int size)
{
    void *ptr = malloc(size);

    return ptr;
}

void StringUtil::copy(char *dest, const char *constChar)
{
	strcpy(dest, constChar);

}


