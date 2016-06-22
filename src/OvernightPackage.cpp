/*
 * OvernightPackage.cpp
 *
 *  Created on: Jun 22, 2016
 *      Author: soaler
 */

#include "OvernightPackage.h"
#include <iostream>
#include <stdexcept>

using namespace std;

OvernightPackage::OvernightPackage(const string &nS, const string &aS, const string &cS, const string &sS,
		const string &zS, const string &nR, const string &aR, const string &cR, const string &sR,
		const string &zR, double wght, double cpo, double oncpo)
		: RegularPackage( nS, aS, cS, sS, zS, nR, aR, cR, sR, zR, wght, cpo)
{
	setOvernightCostPerOunce( oncpo );
}

void OvernightPackage::setOvernightCostPerOunce(double oncpo)
{
	if ( oncpo >= 0.0)
	{
		overnightCostPerOunce = oncpo;
	}
	else
	{
		throw invalid_argument("Additional overnight cost per ounce must be greater than or equal to 0.0");
	}
}

double OvernightPackage::getOvernightCostPerOunce() const
{
	return overnightCostPerOunce;
}

double OvernightPackage::calculateCost() const
{
	return (weight * overnightCostPerOunce) + (weight * costPerOunce);
}

void OvernightPackage::print() const
{
	RegularPackage::print();
	cout <<"\n Additional ONCPO is\t\t$" << overnightCostPerOunce <<
			"\n Total with ONCPO is \t\t$" << calculateCost() << "\n\n\n";
}
