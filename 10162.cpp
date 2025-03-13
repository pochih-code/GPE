#include <iostream>
#include <string>
using namespace std;

int map[20] = { 0, 1, 5, 2, 8, 3, 9, 2, 8, 7, 7, 8, 4, 7, 3, 8, 4, 1, 5, 4 };
int main() {
	string n;
	while (cin >> n) {
		if (n == "0") {
			break;
		}
		int len = n.length();
		int value = n[len - 1] - '0';

		if (len > 1) {
			value += 10*(n[len - 2] - '0');
		}

		cout << (map[value % 20] + (value / 20 * 4)) % 10 << "\n";
	}
	return 0;
}