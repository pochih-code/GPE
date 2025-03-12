#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector<int> commands(n + 1);
		int position = 0;
		for (int i = 1; i <= n; i++) { // �Ѳ� 1 �ӫ��O�}�l
			string command; // "LEFT", "RIGHT", "SAME"
			cin >> command;
			if (command == "LEFT") {
				commands[i] -= 1;
			}
			else if (command == "RIGHT") {
				commands[i] += 1;
			}
			else {
				string as; // "AS"
				int index; // i
				cin >> as >> index; // AS i 
				commands[i] = commands[index]; // ����M index �@�˪����O
			}
			position += commands[i];
		}
		cout << position << "\n";
	}
	return 0;
}