#include <iostream>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

// Exercise 1
void NumbersEndingIn7()
{
	for (int i = 0; i < 1000; i++)
	{
		if (i % 10 == 7)
		{
			cout << i << endl;
		}
	}
}

// Exercise 2
void HalfSumElements()
{
	int numbersCount;
	cin >> numbersCount;

	int sum = 0;
	int maxNumber = INT_MIN;
	for (int i = 0; i < numbersCount; i++)
	{
		int num;
		cin >> num;

		sum += num;

		if (maxNumber < num)
		{
			maxNumber = num;
		}
	}

	sum -= maxNumber;

	if (sum == maxNumber)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << sum << endl;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(maxNumber - sum) << endl;
	}
}

// Exercise 3
void Histogram()
{
	int numbersCount;
	cin >> numbersCount;

	int countP1 = 0;
	int countP2 = 0;
	int countP3 = 0;
	int countP4 = 0;
	int countP5 = 0;

	for (int i = 0; i < numbersCount; i++)
	{
		int num;
		cin >> num;

		if (num < 200)
		{
			countP1++;
		}
		else if (num >= 200 && num < 400)
		{
			countP2++;
		}
		else if (num >= 400 && num < 600)
		{
			countP3++;
		}
		else if (num >= 600 && num < 800)
		{
			countP4++;
		}
		else
		{
			countP5++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << ((double)countP1 / numbersCount) * 100 << "%" << endl;
	cout << ((double)countP2 / numbersCount) * 100 << "%" << endl;
	cout << ((double)countP3 / numbersCount) * 100 << "%" << endl;
	cout << ((double)countP4 / numbersCount) * 100 << "%" << endl;
	cout << ((double)countP5 / numbersCount) * 100 << "%" << endl;
}

// Exercise 4
void CleverLily()
{
	int years;
	double washingMachinePrice;
	int toyPrice;

	cin >> years >> washingMachinePrice >> toyPrice;

	int money = 0;
	for (int i = 1; i <= years; i++)
	{
		if (i % 2 == 0)
		{
			money += i * 5 - 1;
		}
		else
		{
			money += toyPrice;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (money >= washingMachinePrice)
	{
		cout << "Yes! " << money - washingMachinePrice << endl;
	}
	else
	{
		cout << "No! " << washingMachinePrice - money << endl;
	}
}

// Exercise 5
void Salary()
{
	int openedTabs;
	int salary;

	cin >> openedTabs >> salary;

	for (int i = 0; i < openedTabs; i++)
	{
		string website;
		cin >> website;

		if (website == "Facebook")
		{
			salary -= 150;
		}
		else if (website == "Instagram")
		{
			salary -= 100;
		}
		else if (website == "Reddit")
		{
			salary -= 50;
		}

		if (salary <= 0)
		{
			break;
		}
	}

	if (salary > 0)
	{
		cout << salary << endl;
	}
	else
	{
		cout << "You have lost your salary." << endl;
	}
}

// Exercise 6
void Oscars()
{
	const double POINTS_FOR_NOMINEE = 1250.5;

	string actorName;
	double initialPoints;
	int numJudges;

	getline(cin, actorName);
	cin >> initialPoints;
	cin >> numJudges;
	cin.ignore();

	double totalPoints = initialPoints;
	for (int i = 0; i < numJudges; i++)
	{
		string judgeName;
		getline(cin, judgeName);

		double judgePoints;
		cin >> judgePoints;
		cin.ignore();

		totalPoints += judgeName.length() * judgePoints / 2;

		if (totalPoints > POINTS_FOR_NOMINEE)
		{
			break;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(1);

	if (totalPoints >= POINTS_FOR_NOMINEE)
	{
		cout << "Congratulations, " << actorName << " got a nominee for leading role with " << totalPoints << "!";
	}
	else
	{
		cout << "Sorry, " << actorName << " you need " << POINTS_FOR_NOMINEE - totalPoints << " more!";
	}
}

// Exercise 7
void TrekkingMania()
{
	int groups;
	cin >> groups;

	int totalPeople = 0;
	int peopleForMusala = 0;
	int peopleForMontBlanc = 0;
	int peopleForKilimanjaro = 0;
	int peopleForK2 = 0;
	int peopleForEverest = 0;

	for (int i = 0; i < groups; i++)
	{
		int people;
		cin >> people;

		totalPeople += people;

		if (people <= 5)
		{
			peopleForMusala += people;
		}
		else if (people >= 6 && people <= 12)
		{
			peopleForMontBlanc += people;
		}
		else if (people >= 13 && people <= 25)
		{
			peopleForKilimanjaro += people;
		}
		else if (people >= 26 && people <= 40)
		{
			peopleForK2 += people;
		}
		else if (people >= 41)
		{
			peopleForEverest += people;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << ((double)peopleForMusala / totalPeople) * 100 << "%" << endl;
	cout << ((double)peopleForMontBlanc / totalPeople) * 100 << "%" << endl;
	cout << ((double)peopleForKilimanjaro / totalPeople) * 100 << "%" << endl;
	cout << ((double)peopleForK2 / totalPeople) * 100 << "%" << endl;
	cout << ((double)peopleForEverest / totalPeople) * 100 << "%" << endl;
}

// Exercise 8
void TennisRanklist()
{
	int tournaments;
	int initialPoints;

	cin >> tournaments >> initialPoints;

	int wonPoints = 0;
	int wonTournaments = 0;

	for (int i = 0; i < tournaments; i++)
	{
		string success;
		cin >> success;

		if (success == "W")
		{
			wonPoints += 2000;
			wonTournaments++;
		}
		else if (success == "F")
		{
			wonPoints += 1200;
		}
		else if (success == "SF")
		{
			wonPoints += 720;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Final points: " << initialPoints + wonPoints << endl;
	cout << "Average points: " << wonPoints / tournaments << endl;
	cout << ((double)wonTournaments / tournaments) * 100 << "%" << endl;
}

int main()
{
	TennisRanklist();
}