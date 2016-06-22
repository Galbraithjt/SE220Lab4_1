/*
 * Package.cpp
 *
 *  Created on: Jun 22, 2016
 *      Author: soaler
 */

#include "Package.h"
#include <iostream>

using namespace std;

Package::Package(const string &nS, const string &aS, const string &cS, const string &sS,
		const string &zS, const string &nR, const string &aR, const string &cR, const string &sR,
		const string &zR)
		: nameS(nS), addressS(aS), cityS(cS), stateS(sS), zipCodeS(zS), nameR(nR), addressR(aR),
		  cityR(cR), stateR(sR), zipCodeR(zR)
{
	//Blank
}

//SETTERS AND GETTERS
void Package::setNameS( const string &nS)
{
	nameS = nS;
}
string Package::getNameS() const
{
	return nameS;
}

void Package::setAddressS( const string &aS)
{
	addressS = aS;
}
string Package::getAddressS() const
{
	return addressS;
}

void Package::setCityS( const string &cS)
{
	cityS = cS;
}
string Package::getCityS() const
{
	return cityS;
}

void Package::setStateS( const string &sS)
{
	stateS = sS;
}
string Package::getStateS() const
{
	return stateS;
}

void Package::setZipCodeS( const string &zS)
{
	zipCodeS = zS;
}
string Package::getZipCodeS() const
{
	return zipCodeS;
}

void Package::setNameR( const string &nR)
{
	nameR = nR;
}
string Package::getNameR() const
{
	return nameR;
}

void Package::setAddressR( const string &aR)
{
	addressR = aR;
}
string Package::getAddressR() const
{
	return addressR;
}

void Package::setCityR( const string &cR)
{
	cityR = cR;
}
string Package::getCityR() const
{
	return cityR;
}

void Package::setStateR( const string &sR)
{
	stateR = sR;
}
string Package::getStateR() const
{
	return stateR;
}

void Package::setZipCodeR( const string &zR)
{
	zipCodeR = zR;
}
string Package::getZipCodeR() const
{
	return zipCodeR;
}

void Package::print() const
{
	cout  << "\n\nFrom:\n" <<nameS << "\n"
			<< addressS <<"\n"
			<< cityS << ", " << stateS << " " << zipCodeS <<"\n\nTo:\n"
			<< nameR <<"\n"
			<< addressR <<"\n"
			<< cityR << ", " << stateR << " " << zipCodeR << "\n\n";
}
