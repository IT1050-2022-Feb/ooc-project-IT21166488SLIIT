// Class Feedback
class Feedback {
private:
	int feedbackID;
	string fullName;
	string email;
	string feedbackMessage;
	Customer* cu;
public:
	Feedback();
	Feedback(int id, string name, string cEmail, string message, Customer *pcu);
	void displayFeedback();
};