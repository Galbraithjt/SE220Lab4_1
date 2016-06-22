//============================================================================
// Name        : SE220Lab4_1.cpp
// Author      : Joshua Galbraith
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
#include "Package.h"
#include "RegularPackage.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

void virtualPrintViaPointer( const Package * const); //prototype
void virtualTotalViaPointer( const Package * const); //prototype
double totalCost = 0.0;

int main()
{
	RegularPackage rP("Lois Lane", "510 31st Street", "Metropolis", "DC", "51384", "Kent Clark",
			"870 60th Street", "Metropolis", "DC", "51384", 6.23, 1.25);

	TwoDayPackage tP("Tony Stark", "8729 425th Avenue", "New York", "NY", "78351", "Wade Wilson",
			"4516 60th Street", "New York", "NY", "74623", 10.5, 1.25, 3);

	OvernightPackage oP("Steve Rogers", "812 4th Street", "New York", "NY", "74362", "Peter Parker",
			"4252 10th Street", "New York", "NY", "74582", 3, 1.25, 1.50);

	cout << fixed << setprecision(2);

	vector<Package *> packages(3);

	packages[0] = &rP;
	packages[1] = &tP;
	packages[2] = &oP;

	for(const Package *packagePtr : packages)
	{
		virtualPrintViaPointer( packagePtr );
	}

	for(const Package *packagePtr : packages)
	{
		virtualTotalViaPointer( packagePtr );
	}

	cout << "Total cost \t\t\t$" << totalCost <<
			"\n\nThank you for your business ";
}

void virtualPrintViaPointer( const Package * const baseClassPtr)
{
	baseClassPtr->print();
}

void virtualTotalViaPointer( const Package * const baseClassPtr)
{
	totalCost= totalCost + baseClassPtr->calculateCost();
}
