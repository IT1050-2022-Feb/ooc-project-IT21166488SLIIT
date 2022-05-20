#include <iostream>
#include <string>
#include "payment.h"
using namespace std;

Payment::Payment(){}

Payment::Payment(int id, float price){
    paymentID = id;
    totalPrice = price;
}

void Payment::validate(){}

void Payment::dispayPayment(){
    cout<<"Payment ID: "<<paymentID<<endl;
    cout<<"Total Price: Rs "<<totalPrice<<endl<<endl;
}

void Payment::setPrice(float price){
    totalPrice = price;
}

float Payment::getPrice(){
    return totalPrice;
}
Card::Card(){}

Card::Card(int id, float price, string name, string number, string date)
    :Payment(id, price)
{
    cardHolderName = name;
    cardNumber = number;
    expirationDate = date;
}

void Card::displayCardDetails(){
    cout<<"Payment ID: "<<paymentID<<endl;
    cout<<"Total Price: "<<totalPrice<<endl;
    cout<<"Name on the card: "<<cardHolderName<<endl;
    cout<<"Card Number: "<<cardNumber<<endl;
    cout<<"Expiration Date: "<<expirationDate<<endl<<endl;
  }

