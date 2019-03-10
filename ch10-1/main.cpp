#include <iostream>
#include "stock.h"

using namespace std;

int main(int argc, char* argv[])
{
    cout << "Hello World!" << endl;
    STOCK cat;
    cat.acquire("smart", 20, 12.5);
    cat.show();
    cat.buy(5, 18);
    cat.show();
    cat.sell(8, 20.0);
    cat.show();
    cat.buy(3000, 40.99);
    cat.show();
    cat.sell(3000, 0.124);
    cat.show();

    return 0;
}

