#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Exercise 1
void Cinema()
{
	string type;
	int rows;
	int columns;

	cin >> type >> rows >> columns;

	double ticketPrice = 0.0;
	if (type == "Premiere")
	{
		ticketPrice = 12;
	}
	else if (type == "Normal")
	{
		ticketPrice = 7.50;
	}
	else if (type == "Discount")
	{
		ticketPrice = 5;
	}

	int allSeats = rows * columns;
	double totalPrice = allSeats * ticketPrice;

	cout.setf(ios::fixed);
	cout.precision(2);
	
	cout << totalPrice << " leva";
}

// Exercise 2
void SummerOutfit()
{
	const string TIME_OF_DAY_MORNING = "Morning";
	const string TIME_OF_DAY_AFTERNOON = "Afternoon";
	const string TIME_OF_DAY_EVENING = "Evening";

	const string OUTFIT_SHIRT = OUTFIT_SHIRT;
	const string OUTFIT_SWEARSHIRT = "Sweatshirt";
	const string OUTFIT_TSHIRT = "T-Shirt";
	const string OUTFIT_SWIM_SUIT = "Swim Suit";

	const string SHOES_SNEAKERS = "Sneakers";
	const string SHOES_MOCCASINS = "Moccasins";
	const string SHOES_SANDALS = "Sandals";
	const string SHOES_BAREFOOT = "Barefoot";

	int degrees;
	string timeOfDay;

	cin >> degrees >> timeOfDay;

	string outfit = "";
	string shoes = "";

	if (degrees >= 10 && degrees <= 18)
	{
		if (timeOfDay == TIME_OF_DAY_MORNING)
		{
			outfit = OUTFIT_SWEARSHIRT;
			shoes = SHOES_SNEAKERS;
		}
		else if (timeOfDay == TIME_OF_DAY_AFTERNOON)
		{
			outfit = OUTFIT_SHIRT;
			shoes = SHOES_MOCCASINS;
		}
		else if (timeOfDay == TIME_OF_DAY_EVENING)
		{
			outfit = OUTFIT_SHIRT;
			shoes = SHOES_MOCCASINS;
		}
	}
	else if (degrees > 18 && degrees <= 24)
	{
		if (timeOfDay == TIME_OF_DAY_MORNING)
		{
			outfit = OUTFIT_SHIRT;
			shoes = SHOES_MOCCASINS;
		}
		else if (timeOfDay == TIME_OF_DAY_AFTERNOON)
		{
			outfit = OUTFIT_TSHIRT;
			shoes = SHOES_SANDALS;
		}
		else if (timeOfDay == TIME_OF_DAY_EVENING)
		{
			outfit = OUTFIT_SHIRT;
			shoes = SHOES_MOCCASINS;
		}
	}
	else if (degrees >= 25)
	{
		if (timeOfDay == TIME_OF_DAY_MORNING)
		{
			outfit = OUTFIT_TSHIRT;
			shoes = SHOES_SANDALS;
		}
		else if (timeOfDay == TIME_OF_DAY_AFTERNOON)
		{
			outfit = OUTFIT_SWIM_SUIT;
			shoes = SHOES_BAREFOOT;
		}
		else if (timeOfDay == TIME_OF_DAY_EVENING)
		{
			outfit = OUTFIT_SHIRT;
			shoes = SHOES_MOCCASINS;
		}
	}

	cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << ".";
}

// Exercise 3
void NewHouse()
{
	const double PRICE_ROSE = 5;
	const double PRICE_DAHLIA = 3.80;
	const double PRICE_TULIP = 2.80;
	const double PRICE_NARCISSUS = 3;
	const double PRICE_GLADIOLUS = 2.5;

	string flowersType;
	int flowersCount;
	int budget;

	cin >> flowersType >> flowersCount >> budget;

	double cost = 0.0;
	if (flowersType == "Roses")
	{
		cost = flowersCount * PRICE_ROSE;
		if (flowersCount > 80)
		{
			cost *= 0.9;
		}
	}
	else if (flowersType == "Dahlias")
	{
		cost = flowersCount * PRICE_DAHLIA;
		if (flowersCount > 90)
		{
			cost *= 0.85;
		}
	}
	else if (flowersType == "Tulips")
	{
		cost = flowersCount * PRICE_TULIP;
		if (flowersCount > 80)
		{
			cost *= 0.85;
		}
	}
	else if (flowersType == "Narcissus")
	{
		cost = flowersCount * PRICE_NARCISSUS;
		if (flowersCount < 120)
		{
			cost *= 1.15;
		}
	}
	else if (flowersType == "Gladiolus")
	{
		cost = flowersCount * PRICE_GLADIOLUS;
		if (flowersCount < 80)
		{
			cost *= 1.2;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (cost > budget)
	{
		cout << "Not enough money, you need " << cost - budget << " leva more.";
	}
	else
	{
		cout << "Hey, you have a great garden with " << flowersCount << " " << flowersType << " and " << budget - cost << " leva left.";
	}
}

// Exercise 4
void FishingBoat()
{
	const double RENT_SPRING = 3000;
	const double RENT_SUMMER = 4200;
	const double RENT_AUTUMN = 4200;
	const double RENT_WINTER = 2600;

	const string SEASON_SPRING = "Spring";
	const string SEASON_SUMMER = "Summer";
	const string SEASON_AUTUMN = "Autumn";
	const string SEASON_WINTER = "Winter";

	int budget;
	string season;
	int people;

	cin >> budget >> season >> people;

	double cost = 0;

	if (season == SEASON_SPRING)
	{
		cost += RENT_SPRING;
	}
	else if (season == SEASON_SUMMER)
	{
		cost += RENT_SUMMER;
	}
	else if (season == SEASON_AUTUMN)
	{
		cost += RENT_AUTUMN;
	}
	else if (season == SEASON_WINTER)
	{
		cost += RENT_WINTER;
	}

	if (people <= 6)
	{
		cost *= 0.9;
	}
	else if (people >= 7 && people <= 11)
	{
		cost *= 0.85;
	}
	else if (people >= 12)
	{
		cost *= 0.75;
	}

	if (people % 2 == 0 && season != SEASON_AUTUMN)
	{
		cost *= 0.95;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (cost <= budget)
	{
		cout << "Yes! You have " << budget - cost << " leva left.";
	}
	else
	{
		cout << "Not enough money! You need " << cost - budget << " leva.";
	}
}

// Exercise 5
void Journey()
{
	const string DESTINATION_BULGARIA = "Bulgaria";
	const string DESTINATION_BALKANS = "Balkans";
	const string DESTINATION_EUROPE = "Europe";

	const string SEASON_SUMMER = "summer";
	const string SEASON_WINTER = "winter";

	const string PLACE_TO_SLEEP_CAMP = "Camp";
	const string PLACE_TO_SLEEP_HOTEL = "Hotel";

	double budget;
	string season;

	cin >> budget >> season;

	string destination = "";
	string placeToSleep = "";
	double moneySpent = 0;

	if (budget <= 100)
	{
		destination = DESTINATION_BULGARIA;

		if (season == SEASON_SUMMER)
		{
			placeToSleep = PLACE_TO_SLEEP_CAMP;
			moneySpent = budget * 0.3;
		}
		else if (season == SEASON_WINTER)
		{
			placeToSleep = PLACE_TO_SLEEP_HOTEL;
			moneySpent = budget * 0.7;
		}
	}
	else if (budget > 100 && budget <= 1000)
	{
		destination = DESTINATION_BALKANS;

		if (season == SEASON_SUMMER)
		{
			placeToSleep = PLACE_TO_SLEEP_CAMP;
			moneySpent = budget * 0.4;
		}
		else if (season == SEASON_WINTER)
		{
			placeToSleep = PLACE_TO_SLEEP_HOTEL;
			moneySpent = budget * 0.8;
		}
	}
	else if (budget > 1000)
	{
		destination = DESTINATION_EUROPE;
		placeToSleep = PLACE_TO_SLEEP_HOTEL;
		moneySpent = budget * 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Somewhere in " << destination << endl;
	cout << placeToSleep << " - " << moneySpent << endl;
}

// Exercise 6
void OperationsBetweenNumbers()
{
	int n1;
	int n2;
	char operation;

	cin >> n1 >> n2 >> operation;

	cout.setf(ios::fixed);
	cout.precision(2);

	switch (operation)
	{
	case '+':
	case '-':
	case '*':
	{
		int result = 0;
		if (operation == '+')
		{
			result = n1 + n2;
		}
		else if (operation == '-')
		{
			result = n1 - n2;
		}
		else if (operation == '*')
		{
			result = n1 * n2;
		}

		string evenOdd = (result % 2 == 0) ? "even" : "odd";
		cout << n1 << " " << operation << " " << n2 << " = " << result << " - " << evenOdd;

		break;
	}
	case '/':
	{
		if (n2 == 0)
		{
			cout << "Cannot divide " << n1 << " by zero";
		}
		else
		{
			double result = (double)n1 / n2;
			cout << n1 << " " << operation << " " << n2 << " = " << result;
		}

		break;
	}
	case '%':
	{
		int result = n1 % n2;
		cout << n1 << " " << operation << " " << n2 << " = " << result;

		break;
	}
	}
}

// Exercise 7
void HotelRoom()
{
	string month;
	int days;

	cin >> month >> days;

	double moneyForStudio = 0;
	double moneyForApartment = 0;

	if (month == "May" || month == "October")
	{
		moneyForStudio = days * 50;
		if (days > 7 && days <= 14)
		{
			moneyForStudio *= 0.95;
		}
		else if (days > 14)
		{
			moneyForStudio *= 0.7;
		}

		moneyForApartment = days * 65;
	}
	else if (month == "June" || month == "September")
	{
		moneyForStudio = days * 75.2;
		if (days > 14)
		{
			moneyForStudio *= 0.8;
		}

		moneyForApartment = days * 68.7;
	}
	else if (month == "July" || month == "August")
	{
		moneyForStudio = days * 76;
		moneyForApartment = days * 77;
	}

	if (days > 14)
	{
		moneyForApartment *= 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Apartment: " << moneyForApartment << " lv." << endl;
	cout << "Studio: " << moneyForStudio << " lv. " << endl;
}

// Exercise 8
void OnTimeForExam()
{
	int examHours;
	int examMinutes;
	int arrivalHours;
	int arrivalMinutes;

	cin >> examHours >> examMinutes >> arrivalHours >> arrivalMinutes;

	int examTimeInMinutes = examHours * 60 + examMinutes;
	int arrivalTimeInMinutes = arrivalHours * 60 + arrivalMinutes;

	int difference = examTimeInMinutes - arrivalTimeInMinutes;

	bool isLate = false;

	if (difference < 0)
	{
		cout << "Late" << endl;
		isLate = true;
	}
	else if (difference >= 0 && difference <= 30)
	{
		cout << "On time" << endl;
	}
	else if (difference > 30)
	{
		cout << "Early" << endl;
	}

	int absDifference = abs(difference);
	int hours = absDifference / 60;
	int minutes = absDifference % 60;

	if (absDifference > 0)
	{
		string beforeAfter = isLate ? " after the start" : " before the start";

		if (hours > 0)
		{
			if (minutes < 10)
			{
				cout << hours << ":0" << minutes << " hours" << beforeAfter << endl;
			}
			else
			{
				cout << hours << ":" << minutes << " hours" << beforeAfter << endl;
			}
		}
		else
		{
			if (minutes < 10)
			{
				cout << minutes << " minutes" << beforeAfter << endl;
			}
			else
			{
				cout << minutes << " minutes" << beforeAfter << endl;
			}
		}
	}
}

// Exercise 9
void SkiTrip()
{
	const string ROOM_TYPE_FOR_ONE_PERSON = "room for one person";
	const string ROOM_TYPE_APARTMENT = "apartment";
	const string ROOM_TYPE_PRESIDENT_APARTMENT = "president apartment";

	string daysAsString;
	getline(cin, daysAsString);
	int days = stoi(daysAsString);
	int nights = days - 1;

	string room;
	getline(cin, room);

	string rating;
	getline(cin, rating);

	double cost = 0;

	if (room == ROOM_TYPE_FOR_ONE_PERSON)
	{
		cost = nights * 18;
	}
	else if (room == ROOM_TYPE_APARTMENT)
	{
		cost = nights * 25;
	}
	else if (room == ROOM_TYPE_PRESIDENT_APARTMENT)
	{
		cost = nights * 35;
	}

	if (days < 10)
	{
		if (room == ROOM_TYPE_APARTMENT)
		{
			cost *= 0.7;
		}
		else if (room == ROOM_TYPE_PRESIDENT_APARTMENT)
		{
			cost *= 0.9;
		}
	}
	else if (days >= 10 && days <= 15)
	{
		if (room == ROOM_TYPE_APARTMENT)
		{
			cost *= 0.65;
		}
		else if (room == ROOM_TYPE_PRESIDENT_APARTMENT)
		{
			cost *= 0.85;
		}
	}
	else if (days > 15)
	{
		if (room == ROOM_TYPE_APARTMENT)
		{
			cost *= 0.5;
		}
		else if (room == ROOM_TYPE_PRESIDENT_APARTMENT)
		{
			cost *= 0.80;
		}
	}

	if (rating == "positive")
	{
		cost *= 1.25;
	}
	else
	{
		cost *= 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << cost;
}

int main()
{
	SkiTrip();
}
