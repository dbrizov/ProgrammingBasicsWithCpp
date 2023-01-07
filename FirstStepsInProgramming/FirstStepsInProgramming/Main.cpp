#include <iostream>
#include <math.h>
using namespace std;

// Exercise 1
void USDtoBGN()
{
	cout.setf(ios::fixed);
	cout.precision(2);

	double dollars;
	cin >> dollars;

	double leva = dollars * 1.79549;
	cout << leva << endl;
}

// Exercise 2
void RadiansToDegrees()
{
	double radians;
	cin >> radians;

	double degrees = radians * 180 / 3.14;

	cout << round(degrees) << endl;
}

// Exercise 3
void DepositeCalculator()
{
	double money;
	cin >> money;

	int months;
	cin >> months;

	double anualInterestRate;
	cin >> anualInterestRate;

	double anualInterest = money * (anualInterestRate / 100.0);
	double montlyInterest = anualInterest / 12.0;
	double periodInterest = montlyInterest * months;
	double periodMoney = money + periodInterest;

	cout << periodMoney << endl;
}

// Exercise 4
void VacationBooksList()
{
	int totalPages;
	cin >> totalPages;

	int pagesPerHour;
	cin >> pagesPerHour;

	int days;
	cin >> days;

	int totalHours = totalPages / pagesPerHour;
	int hoursPerDay = totalHours / days;

	cout << hoursPerDay << endl;
}

// Exercise 5
void SchoolSupplies()
{
	double priceForPackageOfPens = 5.80;
	double priceForPackageOfMarkers = 7.20;
	double priceForOneLiterOfLiquid = 1.20;

	int penPackages;
	cin >> penPackages;

	int markerPackages;
	cin >> markerPackages;

	int litersOfLiquid;
	cin >> litersOfLiquid;

	int discountPercentage;
	cin >> discountPercentage;

	double priceForPens = penPackages * priceForPackageOfPens;
	double priceForMarkers = markerPackages * priceForPackageOfMarkers;
	double priceForLiquid = litersOfLiquid * priceForOneLiterOfLiquid;
	double price = priceForPens + priceForMarkers + priceForLiquid;
	double priceDiscount = price * (discountPercentage / 100.0);
	double priceAfterDiscount = price - priceDiscount;

	cout << priceAfterDiscount;
}

// Exercise 6
void Repainting()
{
	double nilonPrice = 1.50; // for 1 m2
	double paintPrice = 14.50; // for 1 liter
	double diluentPrice = 5.00; // for 1 liter
	double bagsPrice = 0.40;
	double bonusPaintPercentage = 10; // 10% bonus of the total paint needed
	double bonusNilon = 2; // 2 m2 just in case

	int nilon;
	cin >> nilon;

	int paint;
	cin >> paint;

	int diluent;
	cin >> diluent;

	int manWorkHours;
	cin >> manWorkHours;

	int totalNilon = nilon + bonusNilon;
	double totalNilonPrice = totalNilon * nilonPrice;

	double totalPaint = paint + (paint * bonusPaintPercentage / 100.0);
	double totalPaintPrice = totalPaint * paintPrice;

	double totalDiluentPrice = diluent * diluentPrice;

	double totalMaterialsPrice = totalNilonPrice + totalPaintPrice + totalDiluentPrice + bagsPrice;

	double oneManHourWorkSalary = totalMaterialsPrice * 0.3;
	double totalManWorkHoursPrice = manWorkHours * oneManHourWorkSalary;

	double totalPrice = totalMaterialsPrice + totalManWorkHoursPrice;

	cout << totalPrice << endl;
}

// Exerciese 7
void FoodDelivery()
{
	double chickenPrice = 10.35;
	double fishPrice = 12.40;
	double veganPrice = 8.15;
	double deliveryPrice = 2.50;

	int numChickens;
	cin >> numChickens;

	int numFish;
	cin >> numFish;

	int numVegan;
	cin >> numVegan;

	double totalChickenPrice = numChickens * chickenPrice;
	double totalFishPrice = numFish * fishPrice;
	double totalVeganPrice = numVegan * veganPrice;
	double totalMenusPrice = totalChickenPrice + totalFishPrice + totalVeganPrice;
	double totalDesertPrice = totalMenusPrice * 0.2;

	double totalPrice = totalMenusPrice + totalDesertPrice + deliveryPrice;
	cout << totalPrice << endl;
}

// Exercise 8
void BasketBallEquipment()
{
	int yearlyFee;
	cin >> yearlyFee;

	double sneakers = yearlyFee - (yearlyFee * 0.4);
	double outfit = sneakers - (sneakers * 0.2);
	double ball = outfit * (1.0 / 4.0);
	double accessories = ball * (1.0 / 5.0);

	double total = yearlyFee + sneakers + outfit + ball + accessories;
	cout << total << endl;
}

// Exercise 9
void FishTank()
{
	int length;
	cin >> length;

	int width;
	cin >> width;

	int height;
	cin >> height;

	double percent;
	cin >> percent;

	double lengthDM = length / 10.0;
	double widthDM = width / 10.0;
	double heightDM = height / 10.0;

	double totalLiters = lengthDM * widthDM * heightDM;
	double filledLiters = totalLiters * (percent / 100.0);
	double emptyLiters = totalLiters - filledLiters;

	cout << emptyLiters << endl;
}

int main()
{
	FishTank();

	return 0;
}