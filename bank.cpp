#include <iostream>
using namespace std;

// class
class Bank {
private:
    int acno;
    char name[30];
    long balance;

public:
    int Search(int a)
    {
        if (acno == a) {
            ShowAccount();
            return (1);
        }
        return (0);
    }
    void OpenAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter  Balance: ";
        cin >> balance;
    }
    void ShowAccount()
    {
        cout << "\n" << name << "'s account number: "<< acno << " has a balance of $"<<balance <<endl;
    }
    void Deposit()
    {
        long amt;
        cout<<"\n" << "Please Enter Amount You Want to Deposit? ";
        cin >> amt;
        balance = balance + amt;
    	cout<<"\n\n"<<"====================================================\n";
    	cout<<"A/c no.            NAME             Balance\n";
    	cout<<"====================================================\n";
        cout<<acno <<"\t\t   "<< name << "\t\t" << balance;
    }
    void Withdrawal()
    {
        long amt;
        cout<<"\n" << "Please Enter Amount You Want to Withdraw? ";
        cin >> amt;
        balance = balance - amt;
        cout<<"\n\n"<<"====================================================\n";
        cout<<"A/c no.            NAME             Balance\n";
        cout<<"====================================================\n";
        cout<<acno <<"\t\t   "<< name << "\t\t" << balance;
    }
};
