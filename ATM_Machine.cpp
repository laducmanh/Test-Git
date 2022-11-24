#include <iostream>

using namespace std;

float money = 0;
string userId, userPassword;
char menuInput;

void printIntroMenu() {
    cout << endl;
	cout << "l -> Login" << endl;
	cout << "c -> Create New Account" << endl;
	cout << "q -> Quit" << endl;
} 

void printMainMenu() {
    cout << endl;
	cout << "w -> Withdraw money." << endl;
	cout << "d -> Deposit money." << endl;
	cout << "r -> Request balance." << endl;
	cout << "q -> Quit" << endl;
}

bool login() {
	string tempUserId, tempUserPassword;
	
	cout << "Please enter your user id: ";
	cin >> tempUserId;
	
	cout << "Please enter your password: ";
	cin >> tempUserPassword;
	
	if(userId == tempUserId && userPassword == tempUserPassword) {
        cout << endl << "Access Granted!" << endl;
		return true;
    }
    
    cout << endl << "******** LOGIN FAILED! ********" << endl;
	return false;
}

void createAccount() {
	cout << "Please enter your user name: ";
	cin >> userId;
	
	cout << "Please enter your password: ";
	cin >> userPassword;
	
	cout << endl << "Thank You! Your account has been created!" << endl;
}

void withdrawMoney() {
	float temp;	
	
	cout << "Enter amount of withdrawal: $";
	cin >> temp;
	
	if(money - temp >= 0) {
		money -= temp; 
	}
	else {
		cout << "You don't have enough money" << endl;
	}
}

void depositMoney() {
	float temp;
	
	cout << "Enter amount of deposit: $";	
	cin >> temp;
	
	money += temp;	
}

void requestBalance() {
	cout << "Your balance is $" << money << endl;
}

void start() {
	do {
		cout << endl << "Please select an option from the menu below: " << endl;
		
		printIntroMenu();
		
		cout << endl << "You choose: ";
		cin >> menuInput;
        cout << endl;
		
		switch(menuInput) {
			case 'l':
				if(login()) {
					do {     
                		cout << endl << "Please select an option from the menu below: " << endl;

						printMainMenu();
						
						cout << endl << "You choose: ";
						cin >> menuInput;
                        cout << endl;
						
						switch(menuInput) {
							case 'd':
								depositMoney();
								break;
							case 'w':
								withdrawMoney();
								break;
							case 'r':
								requestBalance();
								break;
							case 'q':
                                cout << "Thanks for stopping by!" << endl;
								break;
						}
					} while(menuInput != 'q');
				}
				break;
			case 'c':
				createAccount();
				break;
			case 'q':
                cout << "Thanks for stopping by!" << endl;
				break;
		}
	} while(menuInput != 'q');
}

int main() {
	start();
		
	return 0;
}

