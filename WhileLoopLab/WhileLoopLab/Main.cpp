#include <iostream>
#include <string>
#include <climits>
using namespace std;

// Exercise 1
void ReadText()
{
	while (true)
	{
		string text;
		cin >> text;

		if (text == "Stop")
		{
			break;
		}

		cout << text << endl;
	}
}

// Exercise 2
void Password()
{
	string username;
	string password;

	cin >> username >> password;

	while (true)
	{
		string input;
		cin >> input;

		if (input == password)
		{
			break;
		}
	}

	cout << "Welcome " << username << "!" << endl;
}

// Exercise 3
void SumNumbers()
{
	int initialNumber;
	cin >> initialNumber;

	int sum = 0;
	
	while (sum < initialNumber)
	{
		int number;
		cin >> number;

		sum += number;
	}

	cout << sum << endl;
}

// Exercise 4
void Sequence2kPlus1()
{
	int n;
	cin >> n;

	int k = 1;
	while (k <= n)
	{
		cout << k << endl;
		k = k * 2 + 1;
	}
}

// Exercise 5
void AccountBalance()
{
	cout.setf(ios::fixed);
	cout.precision(2);

	double balance = 0.0;

	while (true)
	{
		string input;
		cin >> input;

		if (input == "NoMoreMoney")
		{
			break;
		}

		double money = stod(input); // convert string to double

		if (money < 0)
		{
			cout << "Invalid operation!" << endl;
			break;
		}

		balance += money;
		cout << "Increase: " << money << endl;
	}

	cout << "Total: " << balance << endl;
}

// Exercise 6
void MaxNumber()
{
	int maxNumber = INT_MIN;

	while (true)
	{
		string input;
		cin >> input;

		if (input == "Stop")
		{
			break;
		}

		int number = stoi(input); // convert string to int
		if (number > maxNumber)
		{
			maxNumber = number;
		}
	}

	cout << maxNumber;
}

// Exercise 7
void MinNumber()
{
	int minNumber = INT_MAX;

	while (true)
	{
		string input;
		cin >> input;

		if (input == "Stop")
		{
			break;
		}

		int number = stoi(input); // convert string to int
		if (number < minNumber)
		{
			minNumber = number;
		}
	}

	cout << minNumber;
}

// Exercise 8
void Graduation()
{
	string name;
	cin >> name;

	int year = 1;
	int repeatYear = 0;
	double gradesSum = 0;

	while (year <= 12)
	{
		double grade;
		cin >> grade;

		if (grade < 4)
		{
			if (repeatYear == 1)
			{
				repeatYear++;
				break;
			}

			repeatYear++;
			continue;
		}

		gradesSum += grade;
		year++;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (repeatYear == 2)
	{
		cout << name << " has been excluded at " << year << " grade" << endl;
	}
	else
	{
		double averageGrade = gradesSum / 12;
		cout << name << " graduated. Average grade: " << averageGrade << endl;
	}
}

int main()
{
	Graduation();
}
