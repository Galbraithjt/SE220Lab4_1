/*
 * OvernightPackage.h
 *
 *  Created on: Jun 22, 2016
 *      Author: soaler
 */

#ifndef OVERNIGHTPACKAGE_H_
#define OVERNIGHTPACKAGE_H_
#include <string>
#include "RegularPackage.h"

class OvernightPackage : public RegularPackage
{
public:
	OvernightPackage(const std::string &, const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &, double = 0.0,
			double = 0.0, double = 0.0);

	void setOvernightCostPerOunce( double ); // set additional Overnight cost per ounce
	double getOvernightCostPerOunce() const; // get additional Overnight cost per ounce

	virtual double calculateCost() const override; // calculate cost additional Overnight cost per ounce
	virtual void print() const override;//print overnight package info

private:
	double overnightCostPerOunce; // additional Overnight cost per ounce
};

#endif
