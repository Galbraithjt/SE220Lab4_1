/*
 * TwoDayPackage.cpp
 *
 *  Created on: Jun 22, 2016
 *      Author: soaler
 */

#include "TwoDayPackage.h"
#include <iostream>
#include <stdexcept>

using namespace std;

TwoDayPackage::TwoDayPackage(const string &nS, const string &aS, const string &cS, const string &sS,
		const string &zS, const string &nR, const string &aR, const string &cR, const string &sR,
		const string &zR, double wght, double cpo, double tdfr)
		: RegularPackage( nS, aS, cS, sS, zS, nR, aR, cR, sR, zR, wght, cpo)
{
	setTwoDayFlatRate( tdfr );
}

void TwoDayPackage::setTwoDayFlatRate(double tdfr)
{
	if ( tdfr >= 0.0)
	{
		twoDayFlatRate = tdfr;
	}
	else
	{
		throw invalid_argument("Flat Rate must be greater than or equal to 0.0");
	}
}

double TwoDayPackage::getTwoDayFlatRate() const
{
	return twoDayFlatRate;
}

double TwoDayPackage::calculateCost() const
{
	return getTwoDayFlatRate() + RegularPackage::calculateCost();
}

void TwoDayPackage::print() const
{
	RegularPackage::print();
	cout << "\n 2 Day Flat Rate is \t\t$" << twoDayFlatRate <<
			"\n Total with 2 Day Flat Rate is \t$" << calculateCost();
}
