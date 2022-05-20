#include <iostream>
#include <string>
#include "admin.h"
#include "movie.h"
#include "contact.h"
#include "manager.h"
#include "report.h"
#include "payment.h"
#include "customer.h"
#include "ticket.h"
#include "feedback.h"
using namespace std;

int main(void){

    cout << "-- Admin Details --" << endl;
	Admin ad001 = Admin(1, "Diwan Sachidu", "diwansachidu", "diwansachidu@gmail.com");
	ad001.displayAdminDetails();

	cout << "-- Movie Details --" << endl;
  Movie m1 = Movie(1,"Sonic the Hedgehog 2", "Action", "Jeff Fowler", "Josh Miller,Patrick Casey,John Whittington", "Ben Schwartz,Idris Elba,Colleen O'Shaughnessey");
  m1.displayMovieDetails();

  cout << "-- Now Showing Movie Detials --" << endl;
  NowShowingMovie n1 = NowShowingMovie(2, "Turning Red", "Animation", "Domee Shi", "Rosana Sullivan,Searit Huluf,Sarah Streicher", "Rosalie Chiang,Sandra Oh,Ava Morse", "2022-05-30");
  n1.displayMovieDetails();

  cout << "-- Comimg Soon Movie Detials --" << endl;
  ComingSoonMovie c1 = ComingSoonMovie(3, "Jurassic World Dominion", "Adventure", "Colin Trevorrow", "Colin Trevorrow,Derek Connolly,Emily Carmichael", "Sam Neill,Laura Dern,Jeff Goldblum", "2022-07-10");
    c1.displayMovieDetails();

  cout<<"-- Contact Details --"<< endl;
	Contact co001 = Contact(1, "Sadaruwan Bandara", 
"sadaruwan@gmail.com", "0766894512", "Demo Message", &cu001);
	co001.displayContact();

  cout << "-- Manager Details -- " << endl;
	Manager ma001 = Manager(1, "Kasun Perera", "kasun@gmail.com");
	ma001.displayManagerDetails();

  cout<< "-- Report Details--"<<endl;
	Report r1 = Report(001,"Income Report");
  Report r2 = Report(002, "List of Members");
  Report r3 = Report(003, "List of Movies");

    r1.displayReport();
    r2.displayReport();
    r3.displayReport();

  cout << "-- Customer Details --" << endl;
	Customer cu001 = Customer(1, "Kasun", "Chamara", "kasunchamara", 
"kasunchamara@gmail.com", "0769841521");
	cu001.displayCustomer();

	cout<<"-- Payment Details --"<<endl;
	Payment pa001 = Payment(1, 700);
	pa001.dispayPayment();

	cout<<" -- Card Details-- "<<endl;
	Card ca001 = Card(1, 700, "Kasun Chamara", "0769841521", "04/23");
	ca001.displayCardDetails();
   
  cout<<"-- Ticket Details --"<< endl;
	Ticket ti001 = Ticket(1, 02, "09:00 AM", 700, &cu001);
	ti001.displayTicketDetails();

  cout<<"-- Feedback Details --"<< endl;
	Feedback fe001 = Feedback(1, "Sadaruwan Bandara", "sadaruwan@gmail.com", "Demo      Message", &cu001);
	fe001.displayFeedback();

    return 0;
}