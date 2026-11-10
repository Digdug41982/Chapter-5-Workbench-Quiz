// Chapter 5 Workbench Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double number;
    double total = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        cin >> number;

        total += number;
    }

    cout << "Running total: " << total << endl;

    return 0;
}