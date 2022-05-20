#include <iostream>
#include <string>
#include "manager.h"
using namespace std;


Manager::Manager()
{
}

Manager::Manager(int m_ID, string m_Name, string m_Mail)
{
	managerID = m_ID;
	manager_Name = m_Name;
	manager_Mail = m_Mail;
}

void Manager::displayManagerDetails()
{
	cout << "Manager ID: " << managerID << endl;
	cout << "Manager Name: " << manager_Name << endl;
	cout << "Manager Mail: " << manager_Mail << endl << endl;
}

void Manager::setmanagerID(int m_ID)
{
}

int Manager::getmanagerID()
{
	return 0;
}

void Manager::managerName(string m_Name)
{
}

string Manager::getmanagerName()
{
	return string();
}

void Manager::managerMail(string m_Mail)
{
}

string Manager::getmanagerMail()
{
	return string();
}
