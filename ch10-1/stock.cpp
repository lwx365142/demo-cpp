#include "stock.h"
#include <iostream>

using namespace std;

STOCK::STOCK()
{
}

void STOCK::acquire(const string &co, long n, double pr)
{
    company = co;
    if(n < 0){
        cout << "Number of shares can't be negative: "
             << company << "shares to 0.\n";
    }
    else {
        shares = n;

    }
    sharesVal = pr;
    setTot();
}

void STOCK::buy(long num, double price)
{
    if(num < 0){
        cout << "Number of purchases can't be negative:"
             << "Transcation is aborted!";
    }
    else {
        shares = num;
        sharesVal = price;
        setTot();
    }

}

void STOCK::sell(long num, double price)
{
    if(num < 0){
        cout << "Number of shares sold can't be negative:"
             << "Transcation is aborted!";
    }
    else if (num > shares) {
        cout << "You can't sell more than you have!"
             << "Transcation is aborted!";
    }
    else{
        shares = num;
        sharesVal = price;
        setTot();
    }
}

void STOCK::update(double price)
{
    sharesVal = price;
    setTot();
}

void STOCK::show()
{
    cout << "company: " << company
         << "\tshares: "  << shares
         << "\tshares val: " << sharesVal
         << "\tTotal worth: " << totalVal << "\n";
}
