#include <iostream>
#include <string>
#include "feedback.h"
#include "customer.h"
using namespace std::

Feedback::Feedback()
{
};

Feedback::Feedback(int id, string name, string cEmail, string message, Customer* pcu)
{
	feedbackID = id;
	fullName = name;
	email = cEmail;
	feedbackMessage = message;
	cu = pcu;
};

void Feedback::displayFeedback()
{
	cout << "Feedback ID: " << feedbackID << endl;
	cout << "Customer Full Name: " << fullName << endl;
	cout << "Customer Email: " << email << endl;
	cout << "Message: " << feedbackMessage << endl;
	cout << "Customer ID: " << cu->getCustomerID() << endl << endl;
};