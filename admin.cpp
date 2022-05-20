#include <iostream>
#include <string>
#include "admin.h"
using namespace std;

Admin::Admin(){}

Admin::Admin(int id, string name, string username, string email)
{
	adminID = id;
	adminName = name;
	adminUsername = username;
	adminEmail = email;
}

void Admin::updateInformation(){}

void Admin::manageMovies(){}

void Admin::manageManagers(){}

void Admin::displayAdminDetails()
{
	cout << "Admin ID: " << adminID << endl;
	cout << "Admin Name: " << adminName << endl;
	cout << "Admin Username: " << adminUsername << endl;
	cout << "Admin Email: " << adminEmail << endl << endl;
}