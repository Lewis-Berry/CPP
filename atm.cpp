#include <iostream>
using namespace std;


void showMenu() {
	cout << "********** MENU **********" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Desposit." << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "**************************" << endl;
}


int main() {
	
	//show menu, show balance, deposit, withdraw
	int userSelection;
	double balance = 500;

	//creating do-while loop for application
	do {
		showMenu();
		cout << "Select an option: " << endl;
		cin >> userSelection;
		cout << " " << endl;

		//handling user selection with switch case
		switch (userSelection) {
		case 1: cout << "Your Balance is: " << balance << endl;
			break;
		case 2: cout << "Desposit Amount: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3: cout << "Withdraw Amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
				balance -= withdrawAmount;
			else
				cout << "Insufficient balance to action request!" << endl;
			break;


		}
	} while (userSelection != 4);



	return 0;
}