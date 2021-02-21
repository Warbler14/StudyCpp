#ifndef HEADER_EXEC02_H_
#define HEADER_EXEC02_H_

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

namespace EXEC_02 {
	void getlineTest(void) {
		string myname;
		cout << "What's your name?" << endl;
		getline(cin, myname);

		cout << "Hello " << myname << ".\n";

		string value;
		float price = 0;
		int quantity = 0;
		cout << "enter price?" ;
		getline(cin, value);
		stringstream(value) >> price;

		cout << "enter quantity?";
		getline(cin, value);
		stringstream(value) >> quantity;

		cout << "total price " << price * quantity << endl;
	}

	void stringstreamTest(){

		string buffer;
		cout << "Enter your data(name kor eng math) : ";
		getline(cin, buffer);

		stringstream ss;
		ss.str(buffer);

		string str;
		while(ss >> str){
			cout << str << endl;
		}
	}

	void stringstreamTest2(){

			string buffer;
			cout << "Enter your data(name kor eng math) : ";
			getline(cin, buffer);

			stringstream ss;
			ss.str(buffer);

//			string name;
//			int sum = 0;
//			string str;
//			while(ss >> str){
//
//				int data_int = 0;
//				stringstream(str) >> data_int;
//
//				if(data_int == 0){
//					string data_str;
//					stringstream(str) >> data_str;
//					name += data_str;
//				} else {
//					sum += data_int;
//
//				}
//
//			}

			string name;
			int score, sum = 0;
			ss >> name;
			while(ss >> score){
				sum += score;
			}

			cout << name << " " << sum << endl;
	}

	void arrayTest01(){

		int numArr[3] = {1,2,3};

		cout << "numArr "<< numArr << endl;
		cout << "numArr[0] " << numArr[0] << endl;
		cout << "sizeof(numArr) " << sizeof(numArr) << endl;
		cout << "sizeof(numArr[0]) " << sizeof(numArr[0]) << endl;

		int numArrSize = sizeof(numArr)/sizeof(numArr[0]);

		for (int idx = 0; idx < numArrSize; idx++) {
			cout << numArr[idx] << endl;
		}
	}

	void arrayTest02(){
		const int SIZE = 5;
		int arr[SIZE];
		int sum = 0;

		for (int idx = 0; idx < SIZE; idx++) {

			cout << "학생 정보 입력 :" ;
			cin >> arr[idx];
			sum += arr[idx];
		}

		cout << "합계 : " << sum << endl;
		cout << "평균 : " << sum/SIZE << endl;

	}

	void randomTest(){
		const int SIZE = 1000;
		srand((unsigned) time(NULL));

		int randArr [10] = {0,};

		for(int idx = 0 ; idx < SIZE ;idx++){
			int num = rand() % 10;
			randArr[num]++;
		}

		for(int idx = 0 ; idx < 10 ;idx++){
			cout << idx << "\t"  << randArr[idx] << endl;
		}

	}

	void histogramTest(){
//		const int SIZE = 10;
		const int STUDENT_COUNT = 5;

		int gradeArr[STUDENT_COUNT] = {1,2,3,2,1};

		for (int idx0 = 0; idx0 < STUDENT_COUNT; idx0++) {
			cout << "번호 " << idx0 << " : ";
			for (int idx1 = 0; idx1 < gradeArr[idx0]; idx1++) {
				cout << "*";
			}
			cout << endl;
		}
	}

}

#endif /* HEADER_EXEC02_H_ */
