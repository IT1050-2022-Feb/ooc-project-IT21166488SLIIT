// Class Admin
class Admin {
private:
	int adminID;
	string adminName;
	string adminUsername;
	string adminEmail;
public:
	Admin();
	Admin(int id, string name, string username, string email);
	void updateInformation();
	void manageMovies();
	void manageManagers();
	void displayAdminDetails();
};
