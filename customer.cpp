#include <iostream>
#include <string>
#include "customer.h"
using namespace std;

Customer::Customer(){}

Customer::Customer(int id, string firstName, string lastName, string uname, string cEmail, string number)
{
	customerID = id;
	customerFirstName = firstName;
	customerLastName = lastName;
	username = uname;
	email = cEmail;
	mobileNumber = number;
}

void Customer::setCustomerID(int id)
{
	customerID = id;
}

int Customer::getCustomerID()
{
    return customerID;
}

void Customer::displayCustomer()
{
	cout << "Customer ID: " << customerID << endl;
	cout << "Customer First Name: " << customerFirstName << endl;
	cout << "Customer Last Name: " << customerLastName << endl;
	cout << "Customer Username: " << username << endl;
	cout << "Customer Email: " << email << endl;
	cout << "Customer Mobile Number: " << mobileNumber << endl << endl;
}


