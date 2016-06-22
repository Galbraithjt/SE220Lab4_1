/*
 * RegularPackage.h
 *
 *  Created on: Jun 22, 2016
 *      Author: Joshua
 */

#ifndef REGULARPACKAGE_H_
#define REGULARPACKAGE_H_
#include <string>
#include "Package.h"

class RegularPackage : public Package
{
public:
	RegularPackage( const std::string &, const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &, double = 0.0, double = 0.0);
			//constructor
	virtual ~RegularPackage()
	{

	}

	void setWeight( double ); // set weight
	double getWeight() const; // get weight

	void setCostPerOunce( double ); // set cost per ounce
	double getCostPerOunce() const; // get cost per ounce

	virtual double calculateCost() const override; // calculate cost method
	virtual void print() const override; // print cost method

protected:
	double weight; // package weight (ounces)
	double costPerOunce; // package cost per ounce
};

#endif /* REGULARPACKAGE_H_ */
