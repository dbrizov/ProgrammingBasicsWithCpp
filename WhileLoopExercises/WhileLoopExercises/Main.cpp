#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Exercise 1
void OldBooks()
{
	string searchedBook;
	getline(cin, searchedBook);

	int searchedBooks = 0;
	bool bookFound = false;

	while (true)
	{
		string input;
		getline(cin, input);

		if (input == searchedBook)
		{
			bookFound = true;
			break;
		}
		else if (input == "No More Books")
		{
			bookFound = false;
			break;
		}

		searchedBooks++;
	}

	if (bookFound)
	{
		cout << "You checked " << searchedBooks << " books and found it." << endl;
	}
	else
	{
		cout << "The book you search is not here!" << endl;
		cout << "You checked " << searchedBooks << " books." << endl;
	}
}

// Exercise 2
void ExamPreparation()
{
	int maxBadGrades;
	cin >> maxBadGrades;
	cin.ignore();

	int grades = 0;
	int badGrades = 0;
	double gradesSum = 0;
	string lastProblemName;

	while (true)
	{
		string problemName;
		getline(cin, problemName);

		if (problemName == "Enough")
		{
			break;
		}

		lastProblemName = problemName;

		double problemGrade;
		cin >> problemGrade;
		cin.ignore();

		if (problemGrade <= 4)
		{
			badGrades++;
			if (badGrades == maxBadGrades)
			{
				break;
			}
		}

		grades++;
		gradesSum += problemGrade;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (badGrades == maxBadGrades)
	{
		cout << "You need a break, " << badGrades << " poor grades." << endl;
	}
	else
	{
		cout << "Average score: " << gradesSum / grades << endl;
		cout << "Number of problems: " << grades << endl;
		cout << "Last problem: " << lastProblemName << endl;
	}
}

// Exercise 3
void Vacation()
{
	double moneyNeeded;
	double moneyOwned;
	
	cin >> moneyNeeded >> moneyOwned;

	int consecutiveSpents = 0;
	int passedDays = 0;

	while (moneyOwned < moneyNeeded && consecutiveSpents < 5)
	{
		string command;
		cin >> command;

		double money;
		cin >> money;

		passedDays++;

		if (command == "spend")
		{
			consecutiveSpents++;
			if (consecutiveSpents == 5)
			{
				break;
			}

			moneyOwned = max(moneyOwned - money, 0.0);
		}
		else if (command == "save")
		{
			consecutiveSpents = 0;
			moneyOwned += money;
		}
	}

	if (consecutiveSpents == 5)
	{
		cout << "You can't save the money." << endl;
		cout << passedDays;
	}

	if (moneyOwned >= moneyNeeded)
	{
		cout << "You saved the money for " << passedDays << " days." << endl;
	}
}

// Exercise 4
void Walking()
{
	const int STEPS_GOAL = 10000;

	int totalSteps = 0;

	while (totalSteps < STEPS_GOAL)
	{
		string input;
		getline(cin, input);

		if (input == "Going home")
		{
			getline(cin, input);
			int steps = stoi(input);
			totalSteps += steps;

			break;
		}

		int steps = stoi(input);
		totalSteps += steps;
	}

	if (totalSteps >= STEPS_GOAL)
	{
		cout << "Goal reached! Good job!" << endl;
	}
	else
	{
		cout << STEPS_GOAL - totalSteps << " more steps to reach goal." << endl;
	}
}

// Exercise 5
void Coins()
{
	double money;
	cin >> money;

	int coinsCount = 0;
	double minCoin = 2;

	while (money > 0)
	{
		double remainingMoney = money - minCoin;
		if (remainingMoney > 0 || abs(remainingMoney) < 0.0001)
		{
			coinsCount++;
			if (abs(remainingMoney) < 0.0001)
			{
				money = 0;
			}
			else
			{
				money = remainingMoney;
			}
		}
		else
		{
			if (minCoin == 2)
			{
				minCoin = 1;
			}
			else if (minCoin == 1)
			{
				minCoin = 0.5;
			}
			else if (minCoin == 0.5)
			{
				minCoin = 0.2;
			}
			else if (minCoin == 0.2)
			{
				minCoin = 0.1;
			}
			else if (minCoin == 0.1)
			{
				minCoin = 0.05;
			}
			else if (minCoin == 0.05)
			{
				minCoin = 0.02;
			}
			else if (minCoin == 0.02)
			{
				minCoin = 0.01;
			}
		}
	}

	cout << coinsCount << endl;
}

// Exercise 6
void Cake()
{
	int width;
	int height;

	cin >> width >> height;

	int piecesLeft = width * height;

	while (piecesLeft > 0)
	{
		string input;
		cin >> input;

		if (input == "STOP")
		{
			break;
		}

		int pieces = stoi(input);
		piecesLeft -= pieces;
	}

	if (piecesLeft >= 0)
	{
		cout << piecesLeft << " pieces are left." << endl;
	}
	else
	{
		cout << "No more cake left! You need " << abs(piecesLeft) << " pieces more." << endl;
	}
}

// Exercise 7
void Moving()
{
	int width;
	int length;
	int height;

	cin >> width >> length >> height;

	int cubicMeters = width * length * height;

	while (cubicMeters > 0)
	{
		string input;
		cin >> input;

		if (input == "Done")
		{
			break;
		}

		int boxes = stoi(input);
		cubicMeters -= boxes;
	}

	if (cubicMeters >= 0)
	{
		cout << cubicMeters << " Cubic meters left." << endl;
	}
	else
	{
		cout << "No more free space! You need " << abs(cubicMeters) << " Cubic meters more." << endl;
	}
}

int main()
{
	Moving();
}
