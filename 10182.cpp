#include <iostream>
using namespace std;

#define N 100000

int x = 0;
int y = 0;
int step = 1;
int hole_x[N + 1000];
int hole_y[N + 1000];

void walk() {
	hole_x[step] = x;
	hole_y[step] = y;
	step++;
	if (step > N) {
		return;
	}
}

void right(int n) {
	while (n--) {
		x++;
		walk();
	}
}

void left(int n) {
	while (n--) {
		x--;
		walk();
	}
}

void left_down(int n) {
	while (n--) {
		y--;
		walk();
	}
}

void right_up(int n) {
	while (n--) {
		y++;
		walk();
	}
}

void left_up(int n) {
	while (n--) {
		x--;
		y++;
		walk();
	}
}

void right_down(int n) {
	while (n--) {
		x++;
		y--;
		walk();
	}
}

int main() {
	walk();
	right_up(1);
	for (int i = 1; step < N; i++) {
		left(i);
		left_down(i);
		right_down(i);
		right(i);
		right_up(i + 1);
		left_up(i);

		if (step > N) {
			break;
		}
	}
	int tmp;
	while (cin >> tmp) {
		cout << hole_x[tmp] << " " << hole_y[tmp] << "\n";
	}
	return 0;
}