#include <iostream>
#include <iomanip>

/**
 * iomanip 사용법
 *
 * setw : 필드의 폭을 설정
 * setfill : 공백을 특정 문자로 지정
 * setprecision : 소수점 이하 자리수 지정
 * left, right : 오른쪽, 왼쪽 정렬
 * showpoint :  0포함 소수점 출력
 * oct, hex : 8, 16진수 출력
 */

using namespace std;

namespace C_COM {
	void function(void) {
		cout << "C_COM function" << endl;
	}

	void function(int count) {
		for (int idx = 0; idx < count; idx++) {
			cout << setw(10) << idx << endl;
		}
	}

	void gugudan() {
		for (int idx0 = 1; idx0 <= 9; idx0++) {
			for (int idx1 = 2; idx1 <= 9; idx1++) {
				int result = idx0 * idx1;

				cout << idx1 << " * " << idx0 << " = ";

				if (result < 10) {
					cout << setw(3);
				}

				cout << result;

				if (idx1 < 9) {
					cout << '\t';
				}

			}
			cout << endl;

		}
	}

	void gugudan(int start, int end) {

		if (start > 10 || start < 2) {
			cout << "start - out of value" << start << endl;
			return;
		}

		if (end > 10 || end < 2) {
			cout << "end - out of value" << end << endl;
			return;
		}

		for (int idx0 = 1; idx0 <= 9; idx0++) {
			for (int idx1 = start; idx1 <= end; idx1++) {
				int result = idx0 * idx1;

				cout << idx1 << " * " << idx0 << " = ";

				if (result < 10) {
					cout << setw(3);
				}

				cout << result;

				if (idx1 < 9) {
					cout << '\t';
				}

			}
			cout << endl;

		}
	}

	void gugudanRange() {
		int start, end;

		cout << "input range : ";

		cin >> start >> end;

		if(start > end){
			cout << "do you want exchange ? " << end << " and " << start << endl;
			char ans;
			cin >> ans;
			if(ans == 'y'){
				int temp = start;
				start = end;
				end = temp;
			} else {
				cout << "exit" << endl;
				return;
			}
		}

		gugudan(start, end);
	}

}

