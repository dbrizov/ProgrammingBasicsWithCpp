#include <iostream>
#include <math.h>
#include <string>
using namespace std;

// Exercise 1
void SumSeconds()
{
	int firstTime;
	int secondTime;
	int thirdTime;

	cin >> firstTime >> secondTime >> thirdTime;

	int totalTime = firstTime + secondTime + thirdTime;

	int minutes = totalTime / 60;
	int seconds = totalTime % 60;

	if (seconds < 10)
	{
		cout << minutes << ":0" << seconds;
	}
	else
	{
		cout << minutes << ":" << seconds;
	}
}

// Exercise 2
void BonusPoints()
{
	int number;
	cin >> number;

	double bonusPoints = 0.0;

	if (number <= 100)
	{
		bonusPoints = 5.0;
	}
	else if (number > 1000)
	{
		bonusPoints = 0.1 * number;
	}
	else
	{
		bonusPoints = 0.2 * number;
	}

	if (number % 2 == 0)
	{
		bonusPoints += 1;
	}
	else if (number % 10 == 5)
	{
		bonusPoints += 2;
	}

	cout << bonusPoints << endl;
	cout << number + bonusPoints << endl;
}

// Exercise 3
void TimePlus15()
{
	int initialHours; // [0, 23]
	int initialMinutes; // [0, 59]

	cin >> initialHours >> initialMinutes;

	int timeInMinutes = initialHours * 60 + initialMinutes;
	int timePlus15 = timeInMinutes + 15;

	int finalHours = timePlus15 / 60;
	int finalMinutes = timePlus15 % 60;

	if (finalHours >= 24)
	{
		finalHours -= 24;
	}

	if (finalMinutes < 10)
	{
		cout << finalHours << ":0" << finalMinutes;
	}
	else
	{
		cout << finalHours << ":" << finalMinutes;
	}
}

// Exercise 4
void ToyShop()
{
	double puzzlePrice = 2.60;
	double dollPrice = 3.00;
	double teddyBearPrice = 4.10;
	double minionPrice = 8.20;
	double truckPrice = 2.00;

	double tripCost;
	int puzzlesCount;
	int dollsCount;
	int teddyBearsCount;
	int minionsCount;
	int trucksCount;

	cin >> tripCost >> puzzlesCount >> dollsCount >> teddyBearsCount >> minionsCount >> trucksCount;

	double profit =
		puzzlesCount * puzzlePrice +
		dollsCount * dollPrice +
		teddyBearsCount * teddyBearPrice +
		minionsCount * minionPrice +
		trucksCount * truckPrice;

	int allToysCount = puzzlesCount + dollsCount + teddyBearsCount + minionsCount + trucksCount;
	if (allToysCount >= 50)
	{
		profit *= 0.75;
	}

	profit *= 0.9;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (profit >= tripCost)
	{
		cout << "Yes! " << profit - tripCost << " lv left.";
	}
	else
	{
		cout << "Not enough money! " << tripCost - profit << " lv needed.";
	}
}

// Exercise 5
void GorzillaVsKong()
{
	double budget;
	int extras;
	double outfitPrice;

	cin >> budget >> extras >> outfitPrice;

	double decorCost = 0.1 * budget;
	double outfitsCost = extras * outfitPrice;

	if (extras > 150)
	{
		outfitsCost *= 0.9;
	}

	double totalCost = decorCost + outfitsCost;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalCost > budget)
	{
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << totalCost - budget << " leva more." << endl;
	}
	else
	{
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << budget - totalCost << " leva left." << endl;
	}
}

// Exercise 6
void WorldSwimmingRecord()
{
	double currentRecord;
	double meters;
	double secondsPerMeter;

	cin >> currentRecord >> meters >> secondsPerMeter;

	double time = meters * secondsPerMeter;
	double timeLost = floor(meters / 15) * 12.5;

	double finalTime = time + timeLost;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (finalTime < currentRecord)
	{
		cout << "Yes, he succeeded! The new world record is " << finalTime << " seconds.";
	}
	else
	{
		cout << "No, he failed! He was " << finalTime - currentRecord << " seconds slower.";
	}
}

// Exercise 7
void Shopping()
{
	double videoCardPrice = 250.00;

	double budget;
	int videoCards;
	int processors;
	int ramChips;

	cin >> budget >> videoCards >> processors >> ramChips;

	double videoCardsCost = videoCards * videoCardPrice;
	double processorsCost = (videoCardsCost * 0.35) * processors;
	double ramChipsCost = (videoCardsCost * 0.1) * ramChips;

	double totalCost = videoCardsCost + processorsCost + ramChipsCost;

	if (videoCards > processors)
	{
		totalCost *= 0.85;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalCost <= budget)
	{
		cout << "You have " << budget - totalCost << " leva left!";
	}
	else
	{
		cout << "Not enough money! You need " << totalCost - budget << " leva more!";
	}
}

// Exercise 8
void LunchBreak()
{
	string tvSeriesName;
	int episodeTime;
	int lunchBreakTime;

	getline(cin, tvSeriesName);
	cin >> episodeTime >> lunchBreakTime;

	double timeForEating = lunchBreakTime / 8.0;
	double timeForResting = lunchBreakTime / 4.0;

	double timeLeft = lunchBreakTime - (timeForEating + timeForResting);

	if (timeLeft >= episodeTime)
	{
		cout << "You have enough time to watch " << tvSeriesName << " and left with " << ceil(timeLeft - episodeTime) << " minutes free time.";
	}
	else
	{
		cout << "You don't have enough time to watch " << tvSeriesName << ", you need " << ceil(episodeTime - timeLeft) << " more minutes.";
	}
}

int main()
{
	LunchBreak();
}
