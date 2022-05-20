// Class Payment
class Payment{
protected:
   int paymentID;
   float totalPrice;
public:
    Payment();
    Payment(int id, float price);
    void validate();
    void dispayPayment();
    void setPrice(float price);
    float getPrice();
};

// Class Card
class Card:public Payment{
protected:
    string cardHolderName;
    string cardNumber;
    string expirationDate;
public:
    Card();
    Card(int id, float price, string name, string number, string date);
    void displayCardDetails();
};