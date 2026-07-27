// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// main vwesion

//UI version 

double Add(double num1, double num2)
{
	return num1 + num2;
}
double Subtract(double num1, double num2)
{
	return num1 - num2;
}
double Multiply(double num1, double num2)
{
	return num1 * num2;
}
double Divide(double num1, double num2)
{
	if (num2 == 0)
	{
		cout << "Error: Cannot divide by zero " << endl;
		return 0;
	}
	return num1 / num2;
}
// New Functions :

double Mod(int num1, int num2)
{
	return num1 % num2;
}

double power(double base, int exp)
{
	double resl = 1;
	for (int i = 0; i < exp; i++)
	{
		resl *= base;

	}
	return resl;
}



void DisplayMenu()
{
	cout << " ************ Calculator ************"<< endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Exit" << endl;
}
// Scientific mode coming soon

int main()
{
	double num1, num2;
	int choice;
	do
	{
		DisplayMenu();

		cout << "Enter Your Choice ";
		cin >> choice;
		if (choice == 5)

		{
			cout << "Thanks for using Calculator.\n";
			break;
		}

		cout << "Enter Two Numbers:\n ";
		cin >>num1 >> num2;
		
		switch (choice)
		{
		case 1 :
			cout << " Result: " <<Add(num1, num2) << endl;
			break;
		case 2: 
			cout << " Result: " <<Subtract(num1, num2) << endl;
			break;
		case 3:  
			cout << " Result: " <<Multiply(num1, num2) << endl;
			break;
		case 4 :
			cout << " Result: " <<Divide(num1, num2) << endl;
			break;





		default :
			cout << "Invalid Choice" << endl;
			break;
		}

	}

	while (true);

	return 0;
	
   

}


