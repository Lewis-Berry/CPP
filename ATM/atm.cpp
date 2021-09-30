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

	//creating while loop for application
	while (1) {
		showMenu();
		cout << "Select an option: " << endl;
		cin >> userSelection;
		cout << " " << endl;

		//handling user selection with switch case
		switch (userSelection) {
		case 1:
			cout << "Your Balance is: " << balance << endl;
			break;
		case 2:
			cout << "Desposit Amount: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;
		case 3:
			cout << "Withdraw Amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
				balance -= withdrawAmount;
			else
				cout << "Insufficient balance to action request!" << endl;
			break;
		case 4:
			cout << "Exiting ATM application!" << endl;
			exit(1);
			break;
		default:
			cout << "Invalid input!" << endl;
			break;

		}
	}

	//application fails if char / string input detected...
	//infinite loop :/

	return 0;
}