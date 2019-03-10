#ifndef STOCK_H
#define STOCK_H

#include <string>

using namespace std;

class STOCK
{
private:
    string company;
    long shares;
    double sharesVal;
    double totalVal;
    void setTot()
    {
        totalVal = shares * sharesVal;
    }

public:
    STOCK();
    void acquire(const string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif // STOCK_H
