/*
 * Package.cpp
 *
 *  Created on: Jun 22, 2016
 *      Author: soaler
 */

#include <iostream>
#include <stdexcept>
#include "RegularPackage.h"
#include "Package.h"
using namespace std;

//constructor
RegularPackage::RegularPackage( const string &nS, const string &aS, const string &cS, const string &sS,
		const string &zS, const string &nR, const string &aR, const string &cR, const string &sR,
		const string &zR, double wght, double cpo)
		: Package( nS, aS, cS, sS, zS, nR, aR, cR, sR, zR)
{ // start Regular Package Constructor
	setWeight( wght );
	setCostPerOunce( cpo );
} // end Regular Package Constructor

//SETTERS AND GETTERS
void RegularPackage::setWeight( double wght )
{
	if ( wght >= 0.0)
	{
		weight = wght;
	}
	else
	{
		throw invalid_argument("Weight must be greater than or equal to 0.0");
	}
}

double RegularPackage::getWeight() const
{
	return weight;
}

void RegularPackage::setCostPerOunce( double cpo )
{
	if ( cpo >= 0.0)
	{
		costPerOunce = cpo;
	}
	else
	{
		throw invalid_argument("Cost Per Ounce must be greater than or equal to 0.0");
	}
}

double RegularPackage::getCostPerOunce()  const
{
	return costPerOunce;
}

double RegularPackage::calculateCost() const
{
	return weight * costPerOunce;
}

void RegularPackage::print() const
{
	Package::print();
	cout <<"\n Package weight \t\t" << weight << "oz" <<
			"\n Cost Per oz is \t\t$" << costPerOunce <<
			"\n Total is \t\t\t$" << RegularPackage::calculateCost();
}
