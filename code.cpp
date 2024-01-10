#include <iostream>
using namespace std;

int main() {
	int times = 0;
	int hits = 0;
	bool array[5][5] = {
		{1,0,0,0,1},
		{0,0,0,1,1},
		{1,1,1,0,0},
		{0,0,0,1,0}
	};

	while (times <= 1000000) {
		int x, y;
		cout << "Type in your x coordinates. (0-4)" << endl;
		cin >> x;
		cout << "Type in your y coordinates. (0-4)" << endl;
		cin >> y;
		if (array[x][y]) {
			array[x][y] = 0;
			hits++;
			cout << "Target Hit!" << endl;
		}
		else {
			cout << "Missed" << endl;
		}
		times++;
		cout << "Times counter : " << times << endl;
	}
	return 0;
}