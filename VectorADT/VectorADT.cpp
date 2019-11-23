// VectorADT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Vector.h"
using namespace std;
int main()
{
	std::cout << "Hello World!\n";
	Vector<string> myvector;
	cout << "Testing my Vector class!" << endl;
	int option;
	string vectest = "";
	do {
		cout << "Enter:\n1 to push_back a string,\n2 to pop a string,\n3 to get the Size,\n4 to find within the vector,\n0 to exit."<<endl;
		cin >> option;
		if (option == 1) {
			cout << endl;
			cout << "Enter a string: ";
			cin.ignore();
			getline(cin, vectest, '\n');
			if (vectest != "")
				cout<< myvector.push_back(vectest);
			cout << " added successfully!" << endl;
		}
		if (option == 2) {
			cout << endl;
			cout << "Removing the last value..." << endl;
			cout<< myvector.pop();
			cout << " removed successfully!" << endl;
		}
		if (option == 3) {
			cout << "The Size is... ";
			cout<< myvector.Size();
			cout << endl;
		}
		if (option == 4) {
			cout << endl;
			cout << "Enter a string to search: ";
			cin.ignore();
			getline(cin, vectest, '\n');
			int index = 0;
			if (vectest != "")
				index = myvector.find(vectest);
			if (index != -1)
				cout << "Woohoo! Found "<<vectest<<" at " << index << "!" << endl;
			else
				cout << "Couldn't find your data." << endl;
		}

		for (int i = 0; i < myvector.Size(); i++)
			cout << myvector[i] << " ";
		cout << endl;

	} while (option);

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
