/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;
//class create
class BankAccount
{
//	Access Specifier
	private:
		int accountnumber = 111;
		int balance = 1000;
		int amount;
//	Access Specifier
	public:
//		function create
		void deposit()
		{
			cout<<"Enetr Amount You Wnat To deposit:";
			cin>>amount;
			balance += amount;
			cout<<"Deposit successful: " <<amount <<endl;
			cout<<"Current balance: "<<balance<<endl;
		}
//		function create
		void withdraw()
		{
			cout<<"Enetr Amount You Wnat To withdraw:";
			cin>>amount;
//			condition for low balance	
			if (amount <= balance) 
			{ 
        		balance -= amount;
        		cout << "Withdrawal successful. Current balance: " <<balance<<endl; 
    		} 
	   		else 
	   		{
        		cout << "Insufficient balance. Current Balance Is:" <<balance<<endl;
      		}
		}
		
};
int main()
{
	int accountnumber = 111;
	int balance =1000;
	
	cout<<"Your Account Nmuber Is: "<<accountnumber<<endl;
	cout<<"Your Balance Is: "<<balance<<endl;
	cout<<endl;
	
	
//	object create
	BankAccount obj;
	
//	function call
	obj.deposit();
	obj.withdraw();
	
	return 0;
}
