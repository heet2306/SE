//Write a program to swap the two numbers using friend function 
//without using third variable 
#include<iostream>
using namespace std;

class NumberSwapper 
{
	public:
    int num1, num2;


    // Constructor to initialize the numbers
    NumberSwapper(int a, int b) : num1(a), num2(b) {}

    // Friend function declaration
    friend void swapNumbers(NumberSwapper&);

    // Member function to display the numbers
    void displayNumbers() 
	{
        cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

// Friend function definition
void swapNumbers(NumberSwapper &obj) 
{
    // Swapping without using a third variable
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    // Initializing two numbers
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Creating an object of NumberSwapper class
    NumberSwapper numbers(num1, num2);

    // Displaying the numbers before swapping
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Calling the friend function to swap the numbers
    swapNumbers(numbers);

    // Displaying the numbers after swapping
    numbers.displayNumbers();

    return 0;
}

