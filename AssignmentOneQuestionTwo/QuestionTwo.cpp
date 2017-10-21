#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;


/*
Alvaro Scheid 09/29/2017
Object-Oriented Programming C++ - Algoma University
COSC2947 :: Assignment number 1
Descp: A large company pays its salespeople on a commision basis. The salespeople each
	   receive $200 per week plus 9% of their gross sales for that week. For example, a
	   salesperson who sells $5000 worth of chemicals in a week receives $200 pluss 9% of
	   $5000, or a total of $650. Develop a C++ program that uses a while statement to in
	   put each salesperson´s gross sales for last week and calculates and display that
	   salesperson´s earnings. Process one salesperson´s figures at a time.
*/

int main()
{
	int exit = 0;
	float sales = 0;
	system("CLS");
	while (exit != -1)
	{
		cout << "Enter sales in dollar (-1 to end): ";
		cin >> sales;
		if (sales == -1)
			exit = -1;
		else
			cout << "Salary is: $" << (200 + (0.09 * sales))<< endl;
	}

	system("PAUSE");
	return 0;
}