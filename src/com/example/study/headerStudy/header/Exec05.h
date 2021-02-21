#ifndef HEADER_EXEC05_H_
#define HEADER_EXEC05_H_

#include <iostream>
#include <fstream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//
//#include <cstring>

using namespace std;

namespace EXEC_05 {


	void dynamicValueTest(){

		int col, row;
		cout << "input col row : ";
		cin >> col >> row;

		//동적할당
		int** parr = new int*[row];
		for(int idx0 = 0 ; idx0 < row ; idx0++ ){
			parr[idx0] = new int[col];
			for(int idx1 = 0 ; idx1 < col ; idx1++ ){
				parr[idx0][idx1] = idx1;
			}
		}

		//삭제(생성의 역순)
		for(int idx0 = 0 ; idx0 < row ; idx0++ ){
			delete[] parr[idx0];
		}
		delete[] parr;

	}


	int ** readMap(const char* fileName, int& refRow, int& refCol){
		ifstream fin(fileName);
		int ** map = NULL;
		if(fin.is_open()){
			int row, col;
			fin >> row >> col;

			refRow = row;
			refCol = col;

			map = new int*[row];
			for(int idx0 = 0 ; idx0 < row ; idx0++ ){
				map[idx0] = new int[col];

				for(int idx1 = 0 ; idx1 < col ; idx1++ ){
					fin >> map[idx0][idx1];
				}

			}

			fin.close();
		} else {
			cout << "file not open" << endl;
		}

		return map;
	}

	void showMap(int**(&map), const int& refRow, const int& refCol){
		for(int idx0 = 0 ; idx0 < refRow; idx0++ ){
			for(int idx1 = 0 ; idx1 < refCol; idx1++ ){
				if(idx1 > 0 ){
					cout << "\t";
				}
				cout << map[idx0][idx1];
			}
			cout << endl;
		}
	}

	void removeMap(int ** map, const int& refRow){
		for(int idx0 = 0 ; idx0 < refRow ; idx0++ ){
			delete[] map[idx0];
		}
		delete[] map;
	}

	void fileTest(){
		ofstream writerFile;
		writerFile.open("./src/test.txt");

		char arr[11] = "Block";
		writerFile.write(arr,10);

		string str = " enter";
		writerFile.write(str.c_str(), str.size());

		writerFile.close();

		//============================

		ifstream readFile;
		readFile.open("./src/map.txt");

		if(readFile.is_open()){
			cout<< "file is open" <<endl;
		} else {
			cout<< "file is not open" <<endl;
		}

		readFile.close();

		//============================

		int row, col;
		int ** map = readMap("./src/map.txt", row, col);

		if(map != NULL){
			showMap(map, row, col);
			removeMap(map, row);
		}


//		if(map != NULL){
//			showMap(map, row, col);
//		}
	}



}

#endif /* HEADER_EXEC05_H_ */
