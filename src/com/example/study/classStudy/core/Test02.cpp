#include <iostream>
#include "../header/Test02.h"

using namespace std;

void Test02::Run() {

	int *a = new int(5);

	cout << a << endl;
	cout << *a << endl;

	delete a;

	int len = 10;
	int *arr = new int[len];

	for( int i=0 ; i < len ; i++ ){
		arr[i] = len -i;
	}

	for( int i=0 ; i < len ; i++ ){
		cout << arr[i] << endl;
	}

	delete[] arr;

}
