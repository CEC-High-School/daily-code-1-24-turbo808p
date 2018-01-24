#include <iostream>

using namespace std;

int input;

int main() {

	cout << "What is your score?" << endl;
	cin >> input;

	if (input < 50)
		cout << "You suck" << endl;
	else if (input > 100)
		cout << "You're great!" << endl;

}