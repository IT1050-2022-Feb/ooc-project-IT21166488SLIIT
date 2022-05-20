#include <iostream>
#include <string>
#include "contact.h"
using namespace std;

Contact::Contact()
{
}

Contact::Contact(int c_ID, string c_Name, string c_Mail, long long c_Number, string c_Message)
{
	contactID = c_ID;
	contactName = c_Name;
	contactMail = c_Mail;
	contactNumber = c_Number;
	contactMessage = c_Message;
}

void Contact::displaycontactDetails()
{
	cout << "Contact ID: " << contactID << endl;
	cout << "Contact Name: " << contactName << endl;
	cout << "Contact Mail: " << contactMail << endl;
	cout << "Contact Number: " << contactNumber << endl;
	cout << "Contact Description: " << contactMessage << endl << endl;
}

void Contact::setcontactID(int c_ID)
{
	contactID = c_ID;
}

int Contact::getcontactID()
{
	return contactID;
}

void Contact::setcontactName(string c_Name)
{
	contactName = c_Name;
}

string Contact::getcontactName()
{
	return contactName;
}

void Contact::setcontactMail(string c_Mail)
{
	contactMail = c_Mail;
}

string Contact::getcontactMail()
{
	return contactMail;
}

void Contact::setcontactNumber(long long c_Number)
{
	contactNumber = c_Number;
}

long long Contact::getcontactNumber()
{
	return contactNumber;
}

void Contact::setcontactMessage(string c_Message)
{
	contactMessage = c_Message;
}

string Contact::getcontactMessage()
{
	return contactMessage;
}
