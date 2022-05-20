using namespace std;



// Class Ticket

class Ticket {

private:
int ticketID;
int ticketCount;
string showTime;
float price;
Customer* cu;

public:
Ticket();
Ticket(int id, int tcount, string stime, float totprice, Customer* pcu);
void displayTicketDetails();

};
