/*
 * Package.h
 *
 *  Created on: Jun 22, 2016
 *      Author: soaler
 */

#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <string>

class Package
{
public:
	Package( const std::string &, const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &, const std::string &,
			const std::string &, const std::string &,const std::string &);
	virtual ~Package()
	{

	} //virtual destructor

	void setNameS (const std::string &);  //set sender name
	std::string getNameS() const; // get sender name

	void setAddressS (const std::string &);  //set sender address
	std::string getAddressS() const; // get sender address

	void setCityS (const std::string &);  //set sender city
	std::string getCityS() const; // get sender city

	void setStateS (const std::string &);  //set sender state
	std::string getStateS() const; // get sender state

	void setZipCodeS (const std::string &);  //set sender zip
	std::string getZipCodeS() const; // get sender zip

	void setNameR (const std::string &);  //set receiver name
	std::string getNameR() const; // get receiver name

	void setAddressR (const std::string &);  //set receiver address
	std::string getAddressR() const; // get receiver address

	void setCityR (const std::string &);  //set receiver city
	std::string getCityR() const; // get receiver city

	void setStateR (const std::string &);  //set receiver state
	std::string getStateR() const; // get receiver state

	void setZipCodeR (const std::string &);  //set receiver zip
	std::string getZipCodeR() const; // get receiver zip

	virtual double calculateCost() const = 0;
	virtual void print() const;

private:
	std::string nameS; //sender name
	std::string addressS; // sender address
	std::string cityS; // sender city
	std::string stateS; // sender state
	std::string zipCodeS; // sender zip
	std::string nameR; // receiver name
	std::string addressR; // receiver address
	std::string cityR; // receiver city
	std::string stateR; // receiver state
	std::string zipCodeR; // receiver zip
};

#endif /* PACKAGE_H_ */
