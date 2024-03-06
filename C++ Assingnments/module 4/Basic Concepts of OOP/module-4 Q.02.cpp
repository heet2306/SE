/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/
#include <iostream>
using namespace std;
//class create
class BankAccount 
{
//	Access Specifier
    private:
//    	private member 
        int accountNumber;
        double balance;
//        Access Specifier
    public:
//    	constructor 
        BankAccount(int accNum, double Bal) 
        {
            accountNumber = accNum;
            balance = Bal;
        }
//        function create
        void deposit(double amount,string name) 
        {
            balance += amount;
            cout<<"Deposit: "<<amount<<endl;
            cout<<name<<" Current balance: "<<balance<<endl;
        }
//        function create
        void withdraw(double amount,string name) 
        {
//        	condition for low balance
            if (balance >= amount) 
            {
                balance -= amount;
                cout<<"Withdrawal successful: "<<amount<<endl;
                cout<<name<<" Current balance: "<<balance<<endl;
            } 
            else 
            {
                cout<<"Insufficient balance. Cannot withdraw.: "<<balance<<endl;
            }
        }
};
int main() 
{
	string name = "Hello world";
	string type = "Saving";
    int accountNumber = 111;
    double Balance  = 1000, amount;
//    printing statements
    cout<<"Name of the Accoutnt Holder: "<<name<<endl;
    cout << "Account number: "<<accountNumber<<endl;
    cout<<"Type of Account: "<<type<<endl;
    cout << "Balance: "<<Balance<<endl;
//    object create
    BankAccount Account(accountNumber, Balance);
    int choice;
        cout << "Enter 1 to deposit, 2 to withdraw, or 0 to exit: ";
        cin >> choice;
//        condition to withdraw or deposit
        if (choice == 0) 
        {
            return 0;
        } 
        else if (choice == 1) 
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            Account.deposit(amount,name);
        } 
        else if (choice == 2) 
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            Account.withdraw(amount,name);
        } 
        else 
        {
            cout << "Invalid choice." << endl;
        }
    return 0;
}

