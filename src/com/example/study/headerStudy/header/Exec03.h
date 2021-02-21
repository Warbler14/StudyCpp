/*
 * Exec03.h
 *
 *  Created on: 2020. 4. 25.
 *      Author: insung
 */

#ifndef HEADER_EXEC03_H_
#define HEADER_EXEC03_H_

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

namespace EXEC_03 {

	void test(){
		const int ROW = 4;
		const int COL = 3;

		int arr[ROW][COL] = {0,};

		cout << arr << endl;
		cout << sizeof(arr) << endl;

		cout << arr[0] <<endl;
		cout << &arr[0] <<endl;
		cout << sizeof(arr[0]) <<endl;

		cout << arr[0][0] <<endl;
		cout << &arr[0][0] <<endl;
		cout << sizeof(arr[0][0]) <<endl;
	}

	void tenTenBox01(){
		const int ROW = 10;
		const int COL = 10;

		string arr[COL][ROW];

		//초기화
		for (int idx0 = 0; idx0 < COL; idx0++) {
			for (int idx1 = 0; idx1 < ROW; idx1++) {
				arr[idx0][idx1] = "□";
			}
		}

		//확인
		for (int idx0 = 0; idx0 < COL; idx0++) {
			for (int idx1 = 0; idx1 < ROW; idx1++) {
				cout << arr[idx0][idx1];
			}
			cout << endl;
		}

		const int ITEM_SIZE = 5;
		srand((unsigned) time(NULL));


		string items [ITEM_SIZE] = {"☆", "▽", "♤", "♧", "◎"};


		const int POS = 3;
		int randPos[3][2];

		for (int idx0 = 0; idx0 < 3; idx0++) {
			for (int idx1 = 0; idx1 < 2; idx1++) {
				randPos[idx0][idx1] = rand() % 10;
			}
		}

		for (int idx0 = 0; idx0 < POS; idx0++) {
			int num = rand() % ITEM_SIZE;
			arr[randPos[idx0][0]][randPos[idx0][1]] = items[num];
		}

		cout << endl;

		//확인
		for (int idx0 = 0; idx0 < COL; idx0++) {
			for (int idx1 = 0; idx1 < ROW; idx1++) {
				cout << arr[idx0][idx1];
			}
			cout << endl;
		}

	}

	void tenTenBox02() {
	//	const int COL = 10;
	//	const int ROW = 10;
		const int COL = 3;
		const int ROW = 3;

		int arr[COL][ROW] = { 0, };

		const int ITEM_SIZE = 4;
		srand((unsigned) time(NULL));

		string items[ITEM_SIZE] = { "□", "▽", "♤", "♧" };

		for (int idx0 = 1; idx0 < ITEM_SIZE; idx0++) {
			int pos = rand() % (COL * ROW);

			int cols = pos / COL;
			int rows = pos % ROW;
			cout << pos << " : " << cols << " " << rows << endl;

			if (arr[cols][rows] > 0) {
				cout << "match" << endl;
				idx0--;
			} else {
				arr[cols][rows] = idx0;
			}
		}

		//확인
		for (int idx0 = 0; idx0 < COL; idx0++) {
			for (int idx1 = 0; idx1 < ROW; idx1++) {

				switch (arr[idx0][idx1]) {
				case 0:
					cout << items[0];
					break;
				case 1:
					cout << items[1];
					break;
				case 2:
					cout << items[2];
					break;
				case 3:
					cout << items[3];
					break;
				}
			}
			cout << endl;
		}

	}

	void viewReservationSeat( int arr[][2], string items[2], int col, int row){
		for (int idx1 = 1; idx1 <= row; idx1++) {
			if(idx1 == 0){
				cout << "\t";
			} else {
				cout << "\t" << idx1;
			}
		}
		cout << endl;

		for (int idx0 = 0; idx0 < col; idx0++) {

			cout << (char)('A' + idx0);

			for (int idx1 = 0; idx1 < row; idx1++) {
				switch (arr[idx0][idx1]) {
				case 0:
					cout << "\t" << items[0];
					break;
				case 1:
					cout << "\t" << items[1];
					break;
				}
			}
			cout << endl;
		}
	}

	void reservationTest(){
		const int COL = 2;
		const int ROW = 2;
		string items[2] = { "○", "●"};
		int arr[COL][ROW] = { 0, };

		int reservationCount = COL*ROW;
//		int reservationCount = COL*ROW -2;

		while(reservationCount > 0){

			viewReservationSeat( arr, items, COL, ROW);

//			for (int idx1 = 1; idx1 <= ROW; idx1++) {
//				if(idx1 == 0){
//					cout << "\t";
//				} else {
//					cout << "\t" << idx1;
//				}
//			}
//			cout << endl;
//
//			for (int idx0 = 0; idx0 < COL; idx0++) {
//
//				cout << (char)('A' + idx0);
//
//				for (int idx1 = 0; idx1 < ROW; idx1++) {
//					switch (arr[idx0][idx1]) {
//					case 0:
//						cout << "\t" << items[0];
//						break;
//					case 1:
//						cout << "\t" << items[1];
//						break;
//					}
//				}
//				cout << endl;
//			}

			cout << "reservationCount : " << reservationCount << endl;
			cout << "select seat : ";

			int selectCol = 0, selectRow = 0;
			char selectColCode = 'A';

			cin >> selectColCode >> selectRow;

			if( 'A' <= selectColCode && selectColCode <= 'Z'){
				selectCol = selectColCode - 'A';
			} else if('a' <= selectColCode && selectColCode <= 'z'){
				selectCol = selectColCode - 'a';
			}

			if(selectRow > ROW){
				cout << "seat not found" << endl;
				return;
			}

			selectRow = selectRow-1;

			cout << selectColCode <<  " " << selectCol << " " << selectRow << endl;

			if(arr[selectCol][selectRow] == 0){
				arr[selectCol][selectRow] = 1;
				reservationCount--;

			} else {
				cout << "reserved seat" << endl;
			}


		}

		viewReservationSeat( arr, items, COL, ROW);
	}










}

#endif /* HEADER_EXEC03_H_ */
