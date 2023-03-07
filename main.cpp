#include <iostream>

using namespace std;

void menu() {

	int userInput;

	bool quitVal = false;

	while (!quitVal)
	{
		cout << "1 for greeting\n\n2 for quit\n\nSelection: ";
		cin >> userInput;

		if (userInput == 1) {
			cout << "\nHello World\n" << endl;
		}
		else {
			cout << "\nGoodbye!";
			quitVal = true;
		}
	}

	
}

int main() {
	
	menu();

	return 0;
}

