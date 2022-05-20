#include <iostream>
#include <string>
#include "ticket.h"
#include "customer.h"

using namespace std;

Ticket::Ticket() {}
Ticket::Ticket(int id, int tcount, string stime, float totprice, Customer* pcu) {
ticketID = id;
ticketCount = tcount;
showTime = stime;
price = totprice;
cu = pcu;
}



void Ticket::displayTicketDetails() {
cout << "Ticket ID: " << ticketID << endl;
cout << "Number of Tickets: " << ticketCount << endl;
cout << "Show Time: " << showTime << endl;
cout << "Price: Rs " << price << endl;
cout << "Customer ID: " << cu->getCustomerID() << endl << endl;

}
