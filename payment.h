using namespace std;

// Class Customer
class Customer {
private:
	int customerID;
	string customerFirstName;
	string customerLastName;
	string username;
	string email;
	string mobileNumber;
public:
	Customer();
	Customer(int id, string firstName, string lastName, string uname, string cEmail, string number);
	void setCustomerID(int id);
	int getCustomerID();
	void displayCustomer();
};
