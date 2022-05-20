//Class Contact
#include <string>
using namespace std;
class Contact
{
private:
	int contactID;
	string contactName;
	string contactMail;
	long long contactNumber;
	string contactMessage;

public:
	Contact();
	Contact(int c_ID, string c_Name, string c_Mail, long long c_Number,string c_Message);
	void displaycontactDetails();
	void setcontactID(int c_ID);
	int getcontactID();
	void setcontactName(string c_Name);
	string getcontactName();
	void setcontactMail(string c_Mail);
	string getcontactMail();
	void setcontactNumber(long long c_Number);
	long long getcontactNumber();
	void setcontactMessage(string c_Message);
	string getcontactMessage();
};