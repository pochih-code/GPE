#include <iostream>
using namespace std;

#define N 100000

// Global Variable
int x = 0;
int y = 0;
int step = 1; // �_�޽s��
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

// �V������ n �B
void wn(int n){
    while(n--){
        x--; // x �y�д��
        walk(); // ��s�y��
    }
}

// �V���U���� n �B
void no(int n){
    while(n--){
        y--; // y �y�д��
        walk();
    }
}

// �V�k�U���� n �B
void en(int n){
    while(n--){
        x++; // x �y�мW�[
        y--; // y �y�д��
        walk();
    }
}

// �V�k���� n �B
void es(int n){
    while(n--){
        x++; // x �y�мW�[
        walk();
    }
}

// �V�k�W���� n �B
void so(int n){
    while(n--){
        y++; // y �y�мW�[
        walk();
    }
}

// �V���W���� n �B
void ws(int n){
    while(n--){
        x--; // x �y�д��
        y++; // y �y�мW�[
        walk();
    }
}

void right(int n) {
	while (n--) {
		x++;
		walk();
	}
}

int main() {
	walk();
    so(1);

    for (int i = 1; step < N; i++) {
        wn(i);
        no(i);
        en(i);
        es(i);
        so(i + 1);
        ws(i);

        if (step > N) {
            break;
        }
    }
    int tmp;
    while (cin >> tmp) {
        cout << hole_x[tmp] << " " << hole_y[tmp] << endl;
    }
    return 0;
}