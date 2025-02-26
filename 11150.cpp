# include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int total = n; // all drinked cola
		int empty = n; // empty bottles
		while (empty >= 3) {
			int newcola = empty / 3;
			total += newcola;
			empty = (empty % 3) + newcola;
		}
		if (empty == 2) {
			total += 1;
		}
		cout << total << "\n";
	}
	return 0;
}
