//Class Manager
#include <iostream>
#include <string>
using namespace std;

class Manager
{
private:
	int managerID;
	string manager_Name;
	string manager_Mail;
public:
	Manager();
	Manager(int m_ID, string m_Name, string m_Mail);
	void displayManagerDetails();
	void setmanagerID(int m_ID);
	int getmanagerID();
	void managerName(string m_Name);
	string getmanagerName();
	void managerMail(string m_Mail);
	string getmanagerMail();
};