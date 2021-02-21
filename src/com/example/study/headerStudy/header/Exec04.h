/*
 * Exec04.h
 *
 *  Created on: 2020. 4. 26.
 *      Author: insung
 */

#ifndef HEADER_EXEC04_H_
#define HEADER_EXEC04_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include <cstring>

using namespace std;

namespace EXEC_04 {

void printArr(int* num, int size){
	for(int i = 0; i < size ; i++){
		if(i > 0){
			cout << "\t";
		}
		cout << num[i];
	}
	cout << endl;
}

void sortTest1(){
	const int SIZE = 10;
	int arr[SIZE] = {0,};

	srand((unsigned) time(NULL));

	for (int idx0 = 0; idx0 < SIZE; ) {
		int pos = rand() %SIZE;

		if( arr[pos] == 0){
			arr[pos] = ++idx0;
		}

	}

	printArr(arr, SIZE);

	for (int idx0 = 0; idx0 < SIZE;  idx0++) {
		int next = idx0+1;
		if(next < SIZE){
			for (int idx1 = next; idx1 < SIZE;  idx1++) {
				if(arr[idx0] > arr[idx1]){
					int temp = arr[idx0];
					arr[idx0] = arr[idx1];
					arr[idx1] = temp;
				}
			}
		}
	}


	printArr(arr, SIZE);
}

void sortTest2(){
	const int SIZE = 10;
	int arr[SIZE] = {0,};

	srand((unsigned) time(NULL));

	for (int idx0 = 0; idx0 < SIZE; ) {
		int pos = rand() %SIZE;

		if( arr[pos] == 0){
			arr[pos] = ++idx0;
		}

	}

	int* parr[SIZE];

	for (int idx0 = 0; idx0 < SIZE;  idx0++) {
		parr[idx0] = &arr[idx0];
	}

	for (int idx0 = 0; idx0 < SIZE;  idx0++) {
		int next = idx0+1;
		if(next < SIZE){
			for (int idx1 = next; idx1 < SIZE;  idx1++) {
				if(*parr[idx0] > *parr[idx1]){
					int* temp = parr[idx0];
					parr[idx0] = parr[idx1];
					parr[idx1] = temp;
				}
			}
		}
	}

	cout << "========arr========"<<endl;
	printArr(arr, SIZE);
	cout << "========parr========"<<endl;
//	for (int idx0 = 0; idx0 < SIZE;  idx0++) {
//		if(idx0 > 0){
//			cout << "\t";
//		}
//		cout << *parr[idx0];
//	}
//	cout << endl;
	for (int* idx0 : parr) {
		cout << "\t";
		cout << *idx0;
	}
	cout << endl;
}

void strTest(){
	char const *moon = "MOON";
	cout << *moon << endl;
	cout << moon << endl;
	cout << moon[2] << endl;

	char const *menu[] = {"New Game", "Load Game", "Play", "Option", "Exit"};

	for (int idx0 = 0; idx0 < 5;  idx0++) {
		cout << menu[idx0] << endl;
	}

	char userInfo[3][2][10] = {{"one", "1"}, {"two", "2"}, {"three", "3"}};
	char id[10], pw[10];
	cout << "input id, password : ";
	cin >> id >> pw;
	for(int idx0 = 0 ; idx0 < 3 ; idx0++){
		int cmpId = strcmp(userInfo[idx0][0], id);
		int cmpPw = strcmp(userInfo[idx0][1], pw);
		if(cmpId == 0 && cmpPw == 0){
			cout << "match "<< userInfo[idx0][0] << userInfo[idx0][1]<< endl;
			break;
		}
	}

}

void refTest(){
	int num = 10;
	int *ptr = &num;
	int **pptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int  **(&ppref) = pptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **ppref << endl;

}

void pSwap(int* a, int* b ){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void pSwapTest(){
	int a = 10, b = 20;
	pSwap(&a, &b);
	cout << a << " " << b << endl;

}

void refSwap(int& a, int& b ){
	int temp = a;
	a= b;
	b = temp;
}

void refSwapTest(){
	int a = 10, b = 20;
	refSwap(a, b);
	cout << a << " " << b << endl;

}

void viewArray(char arr[]){
	cout << arr << endl;
}

void viewArray2(char* parr){
	cout << parr << endl;
}

void viewArrayTest(){
	char testArr[] = "Hello World";
	viewArray(testArr);
	viewArray2(testArr);

}

void view2DArrayStr(int arr [][2], int size){
	for(int idx0 = 0; idx0 < size ; idx0++){
		for(int idx1 = 0; idx1 < 2 ; idx1++){
			cout<<  arr[idx0][idx1];
		}
		cout << endl;
	}
	cout << endl;
}

void view2DArrayStrTest(){
	int arr[3][2] = {{1, 1}, {2, 2}, {3, 3} };

	view2DArrayStr(arr, 3);
}

void idCheck1(char const (&users)[3][2][10], char(& id)[10], char(& pwd)[10], int& index){
//void idCheck1(char const users[3][2][10], char* id, char* pwd, int& index){
	for(int idx0 = 0; idx0 < 3 ; idx0++){

		int cmpId = strcmp(users[idx0][0], id);
		int cmpPw = strcmp(users[idx0][1], pwd);
		if(cmpId == 0 && cmpPw == 0){
			cout << "match "<< users[idx0][0] << users[idx0][1]<< endl;
			index = idx0;
			break;
		}

	}
}

void idCheckTest1(){
	char const users[3][2][10] = {{"one","01"}
										,{ "two","02"}
										,{ "three","03"}};


	char id[10], pwd[10];
	cout << "input id : ";
	cin >> id ;
	cout << "input pwd : ";
	cin >> pwd;
	cout << id << " " << pwd << endl;

	int index = 0;
	idCheck1(users, id, pwd, index);

	cout << index << endl;
}

//TODO 포인트 배열 변수를 함수에 전달하면서 레퍼런스 변수로 넘기는 방법?

void idCheck2(char const *users[][3], char(& id)[10], char(& pwd)[10], int& index){
//void idCheck2(char const *users[][3], char* id, char* pwd, int& index){
	for(int idx0 = 0; idx0 < 3 ; idx0++){

		int cmpId = strcmp(users[idx0][0], id);
		int cmpPw = strcmp(users[idx0][1], pwd);
		if(cmpId == 0 && cmpPw == 0){
			cout << "match "<< users[idx0][0] << users[idx0][1]<< endl;
			index = idx0;
			break;
		}

	}
}

void idCheckTest2(){
	char const *users[][3] = {{"one","01"}
										,{ "two","02"}
										,{ "three","03"}};


	char id[10], pwd[10];
	cout << "input id : ";
	cin >> id ;
	cout << "input pwd : ";
	cin >> pwd;
	cout << id << " " << pwd << endl;

	int index = 0;
	idCheck2(users, id, pwd, index);

	cout << index << endl;
}


}

#endif /* HEADER_EXEC04_H_ */
