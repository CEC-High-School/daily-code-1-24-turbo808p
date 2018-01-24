#include <iostream>

using namespace std;

int number;

int main() {

	cout << "What is your score?" << endl;
	cin >> number;

	if (50>number)
		cout << "You suck" << endl;

	else if (100<number)
		cout << "You're great!" << endl;

	else
		cout << "Better luck next time." << endl;

	system("pause");

}