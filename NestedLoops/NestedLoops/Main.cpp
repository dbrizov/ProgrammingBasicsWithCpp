#include <iostream>
#include <string>
using namespace std;

// Exercise 1
void NumberPyramid()
{
	int n;
	cin >> n;

	int current = 1;

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			if (current > n)
			{
				break;
			}

			cout << current << " ";
			current++;
		}

		if (current > n)
		{
			break;
		}

		cout << endl;
	}
}

// Exercise 2
void EqualSumsEvenOddPosition()
{
	int min;
	int max;

	cin >> min >> max;

	for (int number = min; number <= max; number++)
	{
		int sumEvent = 0;
		int sumOdd = 0;
		int numberCopy = number;

		for (int i = 1; i <= 6; i++)
		{
			int digit = numberCopy % 10;
			if (i % 2 == 0)
			{
				sumEvent += digit;
			}
			else
			{
				sumOdd += digit;
			}

			numberCopy /= 10;
		}

		if (sumEvent == sumOdd)
		{
			cout << number << " ";
		}
	}
}

// Exercise 3
void SumPrimeNonPrime()
{
	int sumPrime = 0;
	int sumNonPrime = 0;

	while (true)
	{
		string command;
		cin >> command;

		if (command == "stop")
		{
			break;
		}

		int number = stoi(command);

		if (number < 0)
		{
			cout << "Number is negative." << endl;
		}
		else if (number == 1)
		{
			sumNonPrime += number;
		}
		else
		{
			bool isPrime = true;
			for (int i = 2; i <= number / 2; i++)
			{
				if (number % i == 0)
				{
					isPrime = false;
					break;
				}
			}

			if (isPrime)
			{
				sumPrime += number;
			}
			else
			{
				sumNonPrime += number;
			}
		}
	}

	cout << "Sum of all prime numbers is: " << sumPrime << endl;
	cout << "Sum of all non prime numbers is: " << sumNonPrime << endl;
}

// Exercise 4
void TrainTheTrainers()
{
	int judges;
	cin >> judges;
	cin.ignore();

	cout.setf(ios::fixed);
	cout.precision(2);

	int gradesCount = 0;
	double sumAllGrades = 0;

	while (true)
	{
		string presentationName;
		getline(cin, presentationName);

		if (presentationName == "Finish")
		{
			break;
		}

		double sumGrades = 0;
		for (int i = 0; i < judges; i++)
		{
			double grade;
			cin >> grade;

			sumGrades += grade;
			sumAllGrades += grade;
			gradesCount++;
		}

		cin.ignore();
		cout << presentationName << " - " << sumGrades / judges << "." << endl;
	}

	cout << "Student's final assessment is " << sumAllGrades / gradesCount << "." << endl;
}

// Exercise 5
void SpecialNumbers()
{
	int n;
	cin >> n;

	for (int i = 1111; i <= 9999; i++)
	{
		int number = i;
		bool isSpecial = true;

		for (int k = 1; k <= 4; k++)
		{
			int digit = number % 10;
			if (digit == 0)
			{
				isSpecial = false;
				break;
			}

			if (n % digit != 0)
			{
				isSpecial = false;
				break;
			}

			number /= 10;
		}

		if (isSpecial)
		{
			cout << i << " ";
		}
	}
}

// Exercise 6
void CinemaTickets()
{
	cout.setf(ios::fixed);
	cout.precision(2);

	int totalTickets = 0;
	int totalStudentTickets = 0;
	int totalStandardTickets = 0;
	int totalKidTickets = 0;

	while (true)
	{
		string movieName;
		getline(cin, movieName);

		if (movieName == "Finish")
		{
			break;
		}

		int emptySeats;
		cin >> emptySeats;
		cin.ignore();

		int tickets = 0;
		int studentTickets = 0;
		int standardTickets = 0;
		int kidTickets = 0;

		for (int i = 0; i < emptySeats; i++)
		{
			string ticketType;
			getline(cin, ticketType);

			if (ticketType == "End")
			{
				break;
			}
			else if (ticketType == "student")
			{
				tickets++;
				studentTickets++;
			}
			else if (ticketType == "standard")
			{
				tickets++;
				standardTickets++;
			}
			else if (ticketType == "kid")
			{
				tickets++;
				kidTickets++;
			}
		}

		totalTickets += tickets;
		totalStudentTickets += studentTickets;
		totalStandardTickets += standardTickets;
		totalKidTickets += kidTickets;

		cout << movieName << " - " << ((double)tickets / emptySeats) * 100 << "% full." << endl;
	}

	cout << "Total tickets: " << totalTickets << endl;
	cout << ((double)totalStudentTickets / totalTickets) * 100 << "% student tickets." << endl;
	cout << ((double)totalStandardTickets / totalTickets) * 100 << "% standard tickets." << endl;
	cout << ((double)totalKidTickets / totalTickets) * 100 << "% kids tickets." << endl;
}

int main()
{
	CinemaTickets();
}
