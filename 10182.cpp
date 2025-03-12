#include <iostream>
using namespace std;

#define N 100000

// Global Variable
int x = 0;
int y = 0;
int step = 1; // 巢穴編號
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

// 向左移動 n 步
void wn(int n){
    while(n--){
        x--; // x 座標減少
        walk(); // 更新座標
    }
}

// 向左下移動 n 步
void no(int n){
    while(n--){
        y--; // y 座標減少
        walk();
    }
}

// 向右下移動 n 步
void en(int n){
    while(n--){
        x++; // x 座標增加
        y--; // y 座標減少
        walk();
    }
}

// 向右移動 n 步
void es(int n){
    while(n--){
        x++; // x 座標增加
        walk();
    }
}

// 向右上移動 n 步
void so(int n){
    while(n--){
        y++; // y 座標增加
        walk();
    }
}

// 向左上移動 n 步
void ws(int n){
    while(n--){
        x--; // x 座標減少
        y++; // y 座標增加
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