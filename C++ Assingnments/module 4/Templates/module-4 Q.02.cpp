//Write a program of to sort the array using templates

#include <iostream>
using namespace std;
//templates
template <class T>
void sort(T num[5])
{
	T temp;
	
    for (int i = 0; i < 5; i++)
    {
        // inner loop
        for (int j = i + 1; j < 5; j++)
        {
            // check and swap for ascending order
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
}

int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Array Element: ";
        cin >> num[i];
    }

//function call
    sort(num);

    cout << "Sorted Array : ";
    //loop to print sort Array
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}

