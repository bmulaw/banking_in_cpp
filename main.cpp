#include <iostream>
#include "bank.cpp"
using namespace std;

void intro()
{
	cout<<"\n\n\n\t  BANK";
	cout<<"\n\n\tMANAGEMENT";
	cout<<"\n\n\t  SYSTEM";
	cout<<"\n\n\n\nMADE BY : Bernard Mulaw";
	cout<<"\nSCHOOL : Boston University";
	cout<<"\n\n";
}

int main() {
    intro();
    int numOfAcc;
    cout<<"How many counts would you like to open?: ";
    cin>>numOfAcc;
    Bank C[numOfAcc];
    
    int found = 0, acno, choice, i;
    for (i = 0; i < numOfAcc; i++) {
        cout<<"\n";
        C[i].OpenAccount();
    }

    
    do {
        cout << "\n\n1:Display All\n2:Search Account No.\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        cout << "Please input your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            for (i = 0; i < numOfAcc; i++) {
                C[i].ShowAccount();
            }
            break;

        case 2: 
            cout << "Account Number? ";
            cin >> acno;
            for (i = 0; i < numOfAcc; i++) {
                found = C[i].Search(acno);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        
        case 3: 
            cout << "Which Account Do You Want To Deposit In? ";
            cin >> acno;
            for (i = 0; i < numOfAcc; i++) {
                found = C[i].Search(acno);
                if (found) {
                    C[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4:
            
            cout << "Which Account Do You Want To Withdraw From? ";
            cin >> acno;
            for (i = 0; i < numOfAcc; i++) {
                found = C[i].Search(acno);
                if (found) {
                    C[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5:
            cout<<"\n\n" << "Have a wonderful day!" << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}