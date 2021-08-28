// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Array {
    int size;
    int length;
    int* A;
};


int main()
{
    struct Array arr;
    cout << "Enter the size of the array: ";
    cin >> arr.size;
    cout << "Enter the no. of elements :";
    cin >> arr.length;
    arr.A = new int[arr.size];
    cout << "Enter the elements :";
    for (int i = 0; i < arr.length; i++) {
        cin >> arr.A[i];
    }
    int choice;
    cout << "Driver menu" << endl;
    cout << "1.Insert" << endl;
    cout << "2.Delete" << endl;
    cout << "3.Search" << endl;
    cout << "4.Sum" << endl;
    cout << "5.Display" << endl;
    cout << endl;
    cout << "Enter your choice :";
    cin >> choice;
    cout << endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
